/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIKeyEventMap.h>

@interface TIKeyEventMap_zh : TIKeyEventMap

+ (id)sharedInstance;
+ (_Bool)supportsSecureCoding;
+ (id)punctuationMap_zh_Hans;
+ (id)punctuationMap_zh_Hant;

- (id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;
- (id)punctuationMap;
- (_Bool)isURLOrEmailKeyboardInKeyboardState:(id)arg1;

@end
