/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSString;

@interface PMLPassThroughTracker : NSObject

{
    struct NSString *_planId;
    unsigned long long _quantizationNumberOfBuckets;
    NSMutableArray *_results;
    NSLock *_resultsLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)trackEvaluationMetrics:(id)arg1 minibatchStats:(id)arg2;
- (id)trackWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4;
- (id)trackGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5;
- (id)initWithPlanId:(struct NSString *)arg1 numberOfBuckets:(unsigned long long)arg2;

@end
