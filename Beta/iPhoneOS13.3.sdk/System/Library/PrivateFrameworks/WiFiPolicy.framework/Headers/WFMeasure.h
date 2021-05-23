/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableURLRequest, NSTimer, NSURLSession, NSURLSessionDownloadTask;

@interface WFMeasure : NSObject

{
    CDUnknownBlockType _completionHandler;
    NSMutableURLRequest *_url;
    NSURLSession *_session;
    NSURLSessionDownloadTask *_task;
    NSDate *_startDate;
    _Bool _isInProgress;
    unsigned int _wakeAssertionId;
    NSTimer *_timer;
}

- (id)initWithType:(int)arg1;
- (void)abort;
- (_Bool)start:(CDUnknownBlockType)arg1;
- (_Bool)isInProgress;
- (void)onTimeout:(id)arg1;

@end
