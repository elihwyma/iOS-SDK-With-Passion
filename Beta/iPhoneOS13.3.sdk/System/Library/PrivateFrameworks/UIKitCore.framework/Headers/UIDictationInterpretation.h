/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIDictationInterpretation : NSObject <Swift>

{
    NSArray *_tokens;
    double _averageConfidenceScore;
}

@property (nonatomic) double averageConfidenceScore;
@property (nonatomic, readonly) NSArray *tokens;
@property (nonatomic, readonly) _Bool removeSpaceBefore;
@property (nonatomic, readonly) _Bool removeSpaceAfter;

+ (_Bool)supportsSecureCoding;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(const struct __CFString *)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokens:(id)arg1 score:(double)arg2;
- (id)serializedInterpretationWithTransform:(const struct __CFString *)arg1;
- (id)initWithTokens:(id)arg1;

@end
