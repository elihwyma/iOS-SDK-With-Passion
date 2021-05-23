/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface HDHeartbeatDatum : NSObject

{
    _Bool _precededByGap;
    double _timeSinceSequenceStart;
}

@property (nonatomic, readonly) double timeSinceSequenceStart;
@property (nonatomic, readonly) _Bool precededByGap;

+ (id)datumWithTimeSinceSequenceStart:(double)arg1 preceededByGap:(_Bool)arg2;

@end
