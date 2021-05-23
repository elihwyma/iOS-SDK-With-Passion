/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordPhraseBoundaryAdjustment : TITypologyRecord

{
    _Bool _forwardAdjustment;
    int _granularity;
    TIKeyboardState *_keyboardState;
    TIKeyboardConfiguration *_keyboardConfig;
}

@property (nonatomic) _Bool forwardAdjustment;
@property (nonatomic) int granularity;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)currentKeyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end
