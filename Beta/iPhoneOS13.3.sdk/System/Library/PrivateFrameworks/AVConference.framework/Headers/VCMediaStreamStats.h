/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaStreamStats : NSObject

{
    struct tagHANDLE *_summerHandle;
    double _lastRecordingTime;
    unsigned int _maxBitrateKbps;
    unsigned int _minBitrateKbps;
    double _maxFramerate;
    double _minFramerate;
    unsigned short _maxFrameDurationMillis;
}

@property (nonatomic, readonly) unsigned int bitrateKbps;
@property (nonatomic) unsigned int maxBitrateKbps;
@property (nonatomic) unsigned int minBitrateKbps;
@property (nonatomic, readonly) double framerate;
@property (nonatomic) double maxFramerate;
@property (nonatomic) double minFramerate;
@property (nonatomic) unsigned short maxFrameDurationMillis;

- (id)init;
- (void)dealloc;
- (void)recordDataWithSize:(double)arg1 atTime:(double)arg2;
- (void)updateMinMaxSinceTime:(double)arg1;
- (unsigned int)getBitrateKbpsSinceTime:(double)arg1;
- (double)getFramerateSinceTime:(double)arg1;

@end
