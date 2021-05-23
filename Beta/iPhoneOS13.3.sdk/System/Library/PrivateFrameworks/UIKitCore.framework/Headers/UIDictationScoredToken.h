/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDictationToken.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIDictationScoredToken : UIDictationToken <Swift>

{
    double _confidenceScore;
}

@property (nonatomic, readonly) double confidenceScore;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 removeSpaceBefore:(_Bool)arg2 removeSpaceAfter:(_Bool)arg3 confidenceScore:(double)arg4;
- (id)_descriptionExtra;

@end
