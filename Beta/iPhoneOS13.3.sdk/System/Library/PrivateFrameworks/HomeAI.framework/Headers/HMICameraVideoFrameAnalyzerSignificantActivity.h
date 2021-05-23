/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMFOSTransaction, HMFUnfairLock, HMISignificantActivityDetector, NSMapTable, NSOperationQueue, NSString;

@interface HMICameraVideoFrameAnalyzerSignificantActivity : HMFObject

{
    HMFUnfairLock *_lock;
    NSOperationQueue *_regionOfInterestOperationQueue;
    NSMapTable *_regionOfInterestOperations;
    HMISignificantActivityDetector *_significantActivityDetector;
    HMFOSTransaction *_transaction;
}

@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (readonly) NSOperationQueue *regionOfInterestOperationQueue;
@property (readonly) NSMapTable *regionOfInterestOperations;
@property (readonly) HMISignificantActivityDetector *significantActivityDetector;
@property (retain, nonatomic) HMFOSTransaction *transaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;
+ (id)classHierarchyMap;

- (id)initWithConfidenceThresholds:(struct NSDictionary *)arg1 nmsThreshold:(double)arg2 error:(id *)arg3;
- (void)preAnalyze:(id)arg1;
- (id)analyze:(id)arg1 targetEventTypes:(long long)arg2 error:(id *)arg3;
- (double)_confidenceScoreOverrideForEventType:(long long)arg1;
- (long long)rankForClassLabel:(long long)arg1;
- (void)_addSimulatedDetectionForEventType:(long long)arg1 targetEventTypes:(long long)arg2 events:(long long *)arg3 annotationScores:(id)arg4 detections:(id)arg5;

@end
