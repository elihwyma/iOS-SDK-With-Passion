/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyRecord.h>

@class NSString, TIKeyboardState;

@interface TITypologyRecordGroupMarker : TITypologyRecord

{
    TIKeyboardState *_keyboardState;
    NSString *_textChange;
}

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (copy, nonatomic) NSString *textChange;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)currentKeyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;

@end
