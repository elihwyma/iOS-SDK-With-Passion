/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

__attribute__((visibility("hidden")))
@interface VCVideoQualityInfo

{
    _Bool _videoIsExpected;
    _Bool _isVideoQualityDegraded;
    double _lastGoodVideoQualityTime;
    double _lastBadVideoQualityTime;
    double _lastVideoQualityDegradedSwitchTime;
    double _firstDegradedMeasure;
    double _videoDegradedThreshold;
}

@property (nonatomic, readonly) _Bool isVideoQualityDegraded;
@property (nonatomic) _Bool videoIsExpected;

- (id)init;
- (void)dealloc;
- (_Bool)updateWithCurrentFramerate:(double)arg1 bitrate:(double)arg2 time:(double)arg3;
- (void)resetLastGoodVideoQualityTime:(double)arg1;

@end
