/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSOperation.h>

@class HMAccessory, HMDeviceSetupSession, HMFUnfairLock, NSError, NSObject, NSString, TRSession;

@protocol OS_dispatch_queue;

@interface HMDeviceSetupOperation : NSOperation

{
    HMFUnfairLock *_lock;
    _Bool _executing;
    _Bool _finished;
    NSError *_error;
    HMAccessory *_accessory;
    TRSession *_session;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMDeviceSetupSession *_setupSession;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) HMDeviceSetupSession *setupSession;
@property (getter=isExecuting) _Bool executing;
@property (getter=isFinished) _Bool finished;
@property (weak, readonly) TRSession *session;
@property (readonly) NSError *error;
@property (readonly) HMAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;

- (id)init;
- (void)cancel;
- (void)start;
- (void)setError:(id)arg1;
- (_Bool)isAsynchronous;
- (void)finish;
- (void)cancelWithError:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)setAccessory:(id)arg1;
- (id)logIdentifier;
- (void)setupSession:(id)arg1 didCloseWithError:(id)arg2;
- (void)setupSession:(id)arg1 didReceiveExchangeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_reallyStart;

@end
