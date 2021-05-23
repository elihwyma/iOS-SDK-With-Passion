/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface StopWatch : NSObject

{
    NSDate *start;
    double cumul;
}

+ (_Bool)nearlyEqualRun:(double)arg1 toRun:(double)arg2 fudgeFactor:(double)arg3;

- (double)stop;
- (void)start;
- (_Bool)isRunning;
- (double)total;
- (double)currentRun;
- (_Bool)wasRunningBefore:(id)arg1;

@end
