/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIKeyEventMap_zh.h>

@interface TIKeyEventMap_zh_Stroke : TIKeyEventMap_zh

+ (id)sharedInstance;
+ (_Bool)supportsSecureCoding;

- (id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;
- (id)wubiFromASCII:(id)arg1;
- (_Bool)isNumericWubi:(id)arg1;

@end
