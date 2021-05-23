/*
 Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

#import <WebContentAnalysis/WFLSMMap.h>

__attribute__((visibility("hidden")))
@interface WFLSMScoreNormalizedMap : WFLSMMap

{
    float *maxScore;
    float *minScore;
}

- (void)dealloc;
- (id)initWithMap:(struct __LSMMap *)arg1;
- (id)evaluate:(id)arg1;

@end
