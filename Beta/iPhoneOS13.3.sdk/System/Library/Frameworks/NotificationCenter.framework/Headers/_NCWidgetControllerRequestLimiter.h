/*
 Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _NCWidgetControllerRequestLimiter : NSObject

{
    NSDate *_lastRequestDate;
    _Bool _isThrottled;
    long long _requestCount;
}

+ (id)sharedInstance;

- (_Bool)isRequestPermitted;

@end
