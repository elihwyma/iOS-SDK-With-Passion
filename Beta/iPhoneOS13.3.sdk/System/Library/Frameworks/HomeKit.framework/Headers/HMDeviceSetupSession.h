/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFUnfairLock, NSDictionary, NSString, NSUUID, _HMContext;

@protocol HMDeviceSetupSessionDelegate, OS_dispatch_queue;

@interface HMDeviceSetupSession : NSObject

{
    HMFUnfairLock *_lock;
    _Bool _open;
    NSDictionary *_userInfo;
    id <HMDeviceSetupSessionDelegate> _delegate;
    NSUUID *_identifier;
    long long _role;
    _HMContext *_context;
}

@property (nonatomic, readonly) _HMContext *context;
@property (nonatomic, getter=isOpen) _Bool open;
@property (weak, readonly) id <HMDeviceSetupSessionDelegate> delegate;
@property (readonly) NSUUID *identifier;
@property (readonly) long long role;
@property (copy, readonly) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)homeManagerDestination;

- (id)init;
- (void)dealloc;
- (void)open;
- (void)close;
- (void)setUserInfo:(id)arg1;
- (id)logIdentifier;
- (void)_closeWithError:(id)arg1;
- (id)initWithRole:(long long)arg1 delegate:(id)arg2;
- (void)sendExchangeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)messageDestination;
- (void)__registerForMessages;
- (void)_handleDisconnection:(id)arg1;
- (void)__handleReceivedExchangeData:(id)arg1;
- (void)__handleClose:(id)arg1;
- (void)_handleOpenedSession;
- (void)__closeWithError:(id)arg1;
- (void)_reallySendExchangeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
