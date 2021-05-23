/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface TUAudioController : NSObject

{
    NSObject<OS_dispatch_semaphore> *_modifyingStateLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *modifyingStateLock;

- (id)init;
- (void)_acquireLock;
- (void)_releaseLock;
- (void)_requestUpdatedValueWithBlock:(CDUnknownBlockType)arg1 object:(id *)arg2 isRequestingPointer:(_Bool *)arg3 forceNewRequest:(_Bool)arg4 scheduleTimePointer:(unsigned long long *)arg5 notificationString:(id)arg6 queue:(id)arg7;

@end
