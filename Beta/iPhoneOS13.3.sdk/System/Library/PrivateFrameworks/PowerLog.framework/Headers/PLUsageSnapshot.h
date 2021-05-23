/*
 Image: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface PLUsageSnapshot : NSObject

{
    NSDate *_timestamp;
    double _cpuUsage;
}

@property (retain) NSDate *timestamp;
@property double cpuUsage;

- (id)description;

@end
