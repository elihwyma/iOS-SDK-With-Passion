/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyRecord.h>

@class NSString, TIKeyboardLayout;

@interface TITypologyRecordKeyboardLayout : TITypologyRecord

{
    TIKeyboardLayout *_keyboardLayout;
    NSString *_name;
}

@property (retain, nonatomic) TIKeyboardLayout *keyboardLayout;
@property (copy, nonatomic) NSString *name;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;

@end
