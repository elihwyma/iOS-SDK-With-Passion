/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class WBSPasswordPatternMatch;

@interface WBSPasswordPatternPartialSolution : NSObject

{
    WBSPasswordPatternMatch *_patternMatch;
    double _guessesRequiredWithoutPatternCountPenalty;
    double _guessesRequiredWithPatternCountPenalty;
}

@property (nonatomic, readonly) WBSPasswordPatternMatch *patternMatch;
@property (nonatomic, readonly) double guessesRequiredWithoutPatternCountPenalty;
@property (nonatomic, readonly) double guessesRequiredWithPatternCountPenalty;

- (id)initWithPatternMatch:(id)arg1 guessesRequiredWithoutPatternCountPenalty:(double)arg2 withPatternCountPenalty:(double)arg3;

@end
