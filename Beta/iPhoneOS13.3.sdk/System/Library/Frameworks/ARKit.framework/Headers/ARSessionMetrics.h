/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARFrame, MISSING_TYPE, NSDate;

@protocol ARSessionMetricsReporting, OS_dispatch_queue;

@interface ARSessionMetrics : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <ARSessionMetricsReporting> _reporter;
    Class _configClass;
    id _currentConfiguration;
    NSDate *_startDate;
    NSDate *_frameStartDate;
    double _sessionTimeForLastBadFrameRecording;
    _Bool _initializingVIO;
    unsigned long long _frameCount;
    unsigned long long _badFrameCount;
    _Bool _positionInitialized;
    MISSING_TYPE *_minPos;
    MISSING_TYPE *_maxPos;
    ARFrame *_lastUpdatedFrame;
    _Bool _hasInitialWorldMap;
    _Bool _relocalizingToInitialWorldMap;
    unsigned long long _raycastCount;
    _Bool _didRunPlaneDetection;
    long long _highestThermalState;
    _Bool _didSwitchToWornMode;
}

- (id)init;
- (id)queue;
- (id)_baseKey;
- (id)initWithReporter:(id)arg1;
- (void)_recordSessionEnd;
- (int)_checkRenderEngine:(id)arg1 withConfiguration:(id)arg2;
- (id)configBasedKey:(id)arg1;
- (id)arkitBasedKey:(id)arg1;
- (void)_recordBadFramePercentageFinal:(_Bool)arg1;
- (void)_recordBadFramePercentageWithBucket:(id)arg1;
- (void)sessionStarted:(id)arg1 withConfiguration:(id)arg2;
- (void)sessionDidUpdateFrame:(id)arg1;
- (void)sessionUpdateThermalState:(long long)arg1;
- (void)saveMapWithFrame:(id)arg1;
- (void)recordRaycast:(id)arg1 tracked:(_Bool)arg2;
- (void)sessionSwitchedPresentationMode:(long long)arg1;
- (void)sessionStopped;

@end
