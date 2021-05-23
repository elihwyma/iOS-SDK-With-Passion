/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSTimer;

@protocol OS_os_activity;

@interface HFUpdateLogger : NSObject

{
    _Bool _didReachSoftTimeout;
    NSObject<OS_os_activity> *_loggerActivity;
    NSString *_clientDescription;
    NSDate *_startDate;
    double _softTimeoutInterval;
    NSTimer *_softTimeoutTimer;
}

@property (retain, nonatomic) NSObject<OS_os_activity> *loggerActivity;
@property (retain, nonatomic) NSString *clientDescription;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) double softTimeoutInterval;
@property (retain, nonatomic) NSTimer *softTimeoutTimer;
@property (nonatomic) _Bool didReachSoftTimeout;

+ (id)history;
+ (id)runningLoggers;

- (id)description;
- (void)finish;
- (void)_handleTimeout:(id)arg1;
- (id)initWithTimeout:(double)arg1 description:(id)arg2;

@end
