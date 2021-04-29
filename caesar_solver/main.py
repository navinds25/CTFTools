
LETTERS = [ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

def process_letter(letter, shift):
    letter = letter.lower()
    if letter not in LETTERS:
        return letter
    index = LETTERS.index(letter)+shift
    if index > 25:
        index = index - 26
    return LETTERS[index]

def caesar_decoder(input_text, shift):
    output_list = []
    for input_letter in input_text:
        converted_letter = process_letter(input_letter, shift)
        if input_letter.isupper():
            output_list.append(converted_letter.upper())
        else:
            output_list.append(converted_letter)
    return ''.join(output_list)

def main():
    print("Enter text to decode: ", end='')
    inputText = input()
    print(inputText)
    for no in range(0, 27):
        print("shift: ", no)
        output = caesar_decoder(inputText, no)
        print(output)


if __name__ == '__main__':
    main()
