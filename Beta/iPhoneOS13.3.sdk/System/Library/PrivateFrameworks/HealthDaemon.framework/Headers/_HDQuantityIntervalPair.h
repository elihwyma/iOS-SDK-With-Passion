/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface _HDQuantityIntervalPair : NSObject

{
    double _startInterval;
    double _endInterval;
}

@property (nonatomic, readonly) double startInterval;
@property (nonatomic, readonly) double endInterval;

- (id)initWithStartInterval:(double)arg1 endInterval:(double)arg2;

@end
