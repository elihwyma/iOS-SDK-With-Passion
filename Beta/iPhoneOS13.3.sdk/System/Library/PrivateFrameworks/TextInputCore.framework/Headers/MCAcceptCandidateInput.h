/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/MCKeyboardInput.h>

@class NSArray, NSString;

@interface MCAcceptCandidateInput : MCKeyboardInput

{
    NSString *_candidateText;
    NSString *_convertedInput;
    NSArray *_remainingMecabraInputs;
    NSString *_remainingInputString;
}

@property (copy, nonatomic, readonly) NSString *candidateText;
@property (copy, nonatomic, readonly) NSString *convertedInput;
@property (copy) NSArray *remainingMecabraInputs;
@property (copy) NSString *remainingInputString;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canComposeNew:(id)arg1;
- (id)initWithCandidateText:(id)arg1 convertedInput:(id)arg2;

@end
