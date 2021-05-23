/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/CHLogger.h>

@class NSObject, NSString;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface WatchDogTimer : CHLogger

{
    NSString *_name;
    NSObject<OS_dispatch_source> *_timer;
}

- (void)dealloc;
- (void)cancel;
- (id)initWithQueue:(id)arg1 withName:(id)arg2 withTimeout:(double)arg3 withCallback:(CDUnknownBlockType)arg4;

@end
