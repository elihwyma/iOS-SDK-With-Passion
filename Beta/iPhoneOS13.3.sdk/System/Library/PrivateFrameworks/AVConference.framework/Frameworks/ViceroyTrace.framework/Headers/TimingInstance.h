/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TimingInstance : NSObject

{
    float startTiming;
    float stopTiming;
    float totalTime;
    _Bool isRunning;
}

@property (nonatomic) float startTiming;
@property (nonatomic) float stopTiming;
@property (nonatomic) float totalTime;
@property (nonatomic) _Bool isRunning;

+ (id)createTimingInstanceWithStartTime:(float)arg1;

- (id)description;

@end
