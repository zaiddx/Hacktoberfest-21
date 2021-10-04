plaintext= input('Enter Plain Text: ').replace(" ", "")
key= input('Enter Key: ').replace(" ", "")
print('\n')

binPlainText =int(plaintext,2)
binKey = int(key,2)

#Encryption
encryption = bin(binPlainText ^ binKey)
encrypted_message = str(encryption[0])+str(encryption)[2:]
print('Encrypted Message: ', encrypted_message)

#Decryption
binEncryptedText = int(encrypted_message,2)
decryption = bin(binEncryptedText^binKey)
decrypted_message = str(decryption)[2:]
print('Decrypted Message: ', decrypted_message)