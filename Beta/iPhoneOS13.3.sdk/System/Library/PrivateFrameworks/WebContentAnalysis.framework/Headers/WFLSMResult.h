/*
 Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface WFLSMResult : NSObject

{
    NSMutableArray *categoryJudgements;
    NSNumber *threshold;
}

@property (copy) NSNumber *threshold;

+ (id)LSMResultWithLSMResultRef:(struct __LSMResult *)arg1 threshold:(id)arg2;
+ (id)extractScoresFromLSMResults:(struct __LSMResult *)arg1;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (_Bool)isRestricted;
- (long long)numberOfCategories;
- (id)initWithLSMResultRef:(struct __LSMResult *)arg1 threshold:(id)arg2;
- (long long)bestMatchingCategory;
- (float)scoreForCategory:(long long)arg1;
- (void)setScore:(float)arg1 forCategory:(long long)arg2;

@end
