def decodeMorse(morseCode):
    return ' '.join(
        map(lambda m_word: ''.join(
                map(lambda m_symbol: MORSE_CODE[m_symbol],
                    m_word.split())),
            morseCode.strip().split('   ')))
