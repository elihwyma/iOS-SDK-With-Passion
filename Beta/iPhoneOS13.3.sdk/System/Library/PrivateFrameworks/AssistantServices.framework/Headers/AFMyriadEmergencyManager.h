/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@protocol AFMyriadEmergencyDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface AFMyriadEmergencyManager : NSObject

{
    id <AFMyriadEmergencyDelegate> _delegate;
    struct __CFNotificationCenter *_center;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _handled;
    _Bool _informed;
}

+ (id)currentManager;

- (void)informDelegateEmergencyHandled;
- (void)informDelegateEmergencyNotHandled;
- (void)_createDispatchTimerFor:(double)arg1 toExecute:(CDUnknownBlockType)arg2;
- (id)initWithDelegate:(id)arg1 onQueue:(id)arg2;
- (void)initiateEmergencyCallMyriad;

@end
