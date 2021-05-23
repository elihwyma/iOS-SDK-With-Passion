/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIKeyEventMap_zh_Phonetic.h>

@interface TIKeyEventMap_zh_Hant_Zhuyin : TIKeyEventMap_zh_Phonetic

+ (id)sharedInstance;
+ (_Bool)supportsSecureCoding;

- (id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;
- (id)punctuationMap;
- (_Bool)isZhuyinCharacterBeforeInsertionPointOfKeyboardState:(id)arg1;

@end
