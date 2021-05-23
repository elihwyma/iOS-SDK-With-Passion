/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCIDRSchedulerStream : NSObject

{
    unsigned int _keyFrameInterval;
    unsigned int _framerate;
    unsigned int _weightFactor;
    unsigned int _framePosition;
    unsigned int _framesPerIdrPeriod;
}

@property (nonatomic) unsigned int keyFrameInterval;
@property (nonatomic) unsigned int framerate;
@property (nonatomic) unsigned int weightFactor;
@property (nonatomic) unsigned int framePosition;
@property (nonatomic) unsigned int framesPerIdrPeriod;

+ (id)schedulerStreamWithKeyFrameInterval:(unsigned int)arg1 framerate:(unsigned int)arg2 weightFactor:(unsigned int)arg3;

- (id)description;
- (id)initWithKeyFrameInterval:(unsigned int)arg1 framerate:(unsigned int)arg2 weightFactor:(unsigned int)arg3;
- (long long)compareWeightFactor:(id)arg1;

@end
