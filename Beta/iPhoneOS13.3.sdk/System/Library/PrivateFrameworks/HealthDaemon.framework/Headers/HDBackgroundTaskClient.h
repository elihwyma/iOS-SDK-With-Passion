/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface HDBackgroundTaskClient : NSObject

{
    CDUnknownBlockType _taskHandler;
}

- (id)initWithTaskHandler:(CDUnknownBlockType)arg1;
- (void)deliverTask:(id)arg1 taskName:(id)arg2 onQueue:(id)arg3;

@end
