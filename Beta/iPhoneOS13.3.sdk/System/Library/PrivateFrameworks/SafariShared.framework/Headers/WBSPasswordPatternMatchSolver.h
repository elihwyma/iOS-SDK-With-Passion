/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet, NSString;

@interface WBSPasswordPatternMatchSolver : NSObject

{
    NSString *_password;
    NSSet *_patternMatches;
    NSMutableDictionary *_partialSolutions;
}

- (id)initWithPassword:(id)arg1 patternMatches:(id)arg2;
- (id)optimalEvaluation;
- (id)_partialSolutionWithEndIndex:(unsigned long long)arg1 patternCount:(unsigned long long)arg2;
- (void)_enumeratePartialSolutionsWithEndIndex:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_setPartialSolution:(id)arg1 withEndIndex:(unsigned long long)arg2 patternCount:(unsigned long long)arg3;
- (id)_exhaustiveSearchPatternWithStartIndex:(unsigned long long)arg1 endIndex:(unsigned long long)arg2;
- (void)_updatePartialSolutionsWithPatternMatch:(id)arg1 patternCount:(unsigned long long)arg2;
- (void)_updateExhaustiveSearchPartialSolutionsAtEndIndex:(unsigned long long)arg1;
- (id)_unwindSolution;

@end
