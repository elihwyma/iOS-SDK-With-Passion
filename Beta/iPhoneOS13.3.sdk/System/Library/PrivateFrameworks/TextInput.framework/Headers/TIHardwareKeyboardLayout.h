/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIKeyboardLayout.h>

@interface TIHardwareKeyboardLayout : TIKeyboardLayout

{
    long long _keyboardType;
}

@property (nonatomic, readonly) long long keyboardType;

+ (_Bool)supportsSecureCoding;
+ (void)flushLayoutCaches;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyboardType:(long long)arg1;
- (void)addString:(id)arg1 forKeyCode:(unsigned long long)arg2;
- (struct CGRect)_frameForKeyCode:(unsigned long long)arg1;
- (id)_ANSIFrames;
- (id)_ISOFrames;
- (id)_JISFrames;

@end
