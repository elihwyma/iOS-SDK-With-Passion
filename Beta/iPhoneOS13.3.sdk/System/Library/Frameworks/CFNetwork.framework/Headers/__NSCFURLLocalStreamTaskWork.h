/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSError;

@interface __NSCFURLLocalStreamTaskWork : NSObject

{
    const char *_static_description;
    double _timeout;
    double _timeoutTime;
    NSError *_recvdError;
    _Bool _hasBeenCalledBack;
    _Bool _timerStarted;
}

- (id)description;
- (id)initWithDescription:(const char *)arg1;
- (const char *)_static_description;

@end
