/*
 Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFCategoryJudgement : NSObject

{
    float score;
    long long category;
}

+ (id)categoryJudgementWithCategory:(long long)arg1 score:(float)arg2;

- (id)description;
- (long long)category;
- (void)setCategory:(long long)arg1;
- (float)score;
- (void)setScore:(float)arg1;
- (long long)compareByCategory:(id)arg1;
- (long long)compareByScore:(id)arg1;

@end
