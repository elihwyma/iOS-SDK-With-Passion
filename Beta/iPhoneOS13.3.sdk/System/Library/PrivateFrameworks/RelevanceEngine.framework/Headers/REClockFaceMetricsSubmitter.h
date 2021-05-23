/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface REClockFaceMetricsSubmitter : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)recordTrainingMetrics:(id)arg1 forInteraction:(id)arg2;
- (void)recordCallibrationCurveMetrics:(id)arg1 forInteraction:(id)arg2;
- (_Bool)_runningInClockFace;
- (_Bool)_runningInTest;
- (_Bool)_shouldRecordMetrics;

@end
