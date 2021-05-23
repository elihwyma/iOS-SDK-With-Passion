/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface WPDStat : NSObject

{
    double _currentTime;
    NSDate *_lastTime;
}

@property double currentTime;
@property (retain) NSDate *lastTime;

- (id)init;
- (void)startTime;
- (void)stopTime;
- (void)calculateTimeUpdate;

@end
