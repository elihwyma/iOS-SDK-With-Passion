/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <SiriActivation/SiriContext.h>

@class NSDictionary;

@interface SiriTestingContext : SiriContext

{
    NSDictionary *_testingContext;
}

@property (nonatomic, readonly) NSDictionary *testingContext;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPPTContext:(id)arg1 siriContextOverride:(id)arg2;
- (id)initWithRecognitionStrings:(id)arg1 siriContextOverride:(id)arg2;
- (id)initWithAudioInput:(id)arg1 siriContextOverride:(id)arg2;
- (id)initWithPPTContext:(id)arg1;
- (id)initWithRecognitionStrings:(id)arg1;
- (id)initWithAudioInput:(id)arg1;
- (_Bool)containsPPT;
- (_Bool)containsRecognitionStrings;
- (_Bool)containsAudioInput;

@end
