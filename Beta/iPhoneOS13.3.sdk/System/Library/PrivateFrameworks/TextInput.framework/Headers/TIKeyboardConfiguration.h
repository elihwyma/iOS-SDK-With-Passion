/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, TIKeyboardInputManagerState, TIKeyboardIntermediateText;

@interface TIKeyboardConfiguration : NSObject

{
    _Bool _assertDefaultKeyPlane;
    TIKeyboardInputManagerState *_inputManagerState;
    TIKeyboardIntermediateText *_intermediateText;
    NSString *_layoutTag;
    NSString *_accentKeyString;
    NSArray *_multilingualLanguages;
}

@property (copy, nonatomic) TIKeyboardInputManagerState *inputManagerState;
@property (retain, nonatomic) TIKeyboardIntermediateText *intermediateText;
@property (copy, nonatomic) NSString *layoutTag;
@property (copy, nonatomic) NSString *accentKeyString;
@property (nonatomic) _Bool assertDefaultKeyPlane;
@property (retain, nonatomic) NSArray *multilingualLanguages;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
