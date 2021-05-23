/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <Foundation/NSObject.h>

@protocol NSCopying;

@interface TKVibrationRecorderTouchSurfaceRecordedDataWrapper : NSObject

{
    double _vibrationPatternMaximumDuration;
    double _vibrationPatternDidStartTimestamp;
    unsigned long long _maximumFramesPerSecondRate;
    void *_recordedData;
    unsigned long long _recordedDataElementsCount;
    unsigned long long _recordedDataCursor;
    _Bool _isWarmUpModeEnabled;
    double _warmUpModeDidStartTimestamp;
    _Bool _displayLinkHasRefreshedAtLeastOnce;
    id <NSCopying> _displayLinkManagerObserverToken;
}

- (void)dealloc;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1;
- (void)didStopRecording;
- (void)recordNormalizedTouchLocation:(struct CGPoint)arg1 touchPhase:(int)arg2;
- (_Bool)getNormalizedTouchLocation:(struct CGPoint *)arg1 touchPhase:(int *)arg2 forTimeInterval:(double)arg3;
- (void)_updateMaximumFramesPerSecondRate:(id)arg1;
- (void)_prepareRecordedDataBufferForStoringEnoughElementsForRecordingDuration:(double)arg1;
- (void)_recordFinalDataWithNormalizedTouchLocation:(struct CGPoint)arg1 touchPhase:(int)arg2 timeIntervalSinceBeginningOfPattern:(double)arg3;

@end
