/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, UIDictationInterpretation;

__attribute__((visibility("hidden")))
@interface UIDictationInterpretationGroup : NSObject <Swift>

{
    _Bool _isLowConfidence;
    NSArray *_interpretations;
}

@property (nonatomic, readonly) NSArray *interpretations;
@property (nonatomic, readonly) double bestConfidenceScore;
@property (nonatomic, readonly) UIDictationInterpretation *bestInterpretation;
@property (nonatomic, readonly) _Bool isLowConfidence;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterpretations:(id)arg1 isLowConfidence:(_Bool)arg2;
- (id)initWithInterpretations:(id)arg1;

@end
