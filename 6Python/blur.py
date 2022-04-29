from PIL import Image, ImageFilter

before = Image.open("elephant.jpeg")
after = before.filter(ImageFilter.BLUR)
after.save("out.jpeg")