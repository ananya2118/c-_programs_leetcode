import torch
from transformers import ViTFeatureExtractor, ViTForImageClassification
from torchvision import transforms

# Load a pre-trained Vision Transformer model and feature extractor
model_name = "google/vit-base-patch16-224-in21k"
feature_extractor = ViTFeatureExtractor(model_name)
model = ViTForImageClassification.from_pretrained(model_name)

# Preprocess input image
transform = transforms.Compose([
    transforms.Resize((224, 224)),
    transforms.ToTensor(),
])
image = transform(Image.open("example.jpg")).unsqueeze(0)

# Tokenize and forward pass
inputs = feature_extractor(images=image, return_tensors="pt")
outputs = model(**inputs)

# Get predictions
predictions = torch.nn.functional.softmax(outputs.logits, dim=-1)
