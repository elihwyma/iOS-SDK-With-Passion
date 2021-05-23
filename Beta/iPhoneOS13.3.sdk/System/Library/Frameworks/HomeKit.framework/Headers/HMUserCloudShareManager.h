/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSUUID, _HMContext;

@protocol HMUserCloudShareManagerDelegate, OS_dispatch_queue;

@interface HMUserCloudShareManager : NSObject

{
    _Bool _registered;
    id <HMUserCloudShareManagerDelegate> _delegate;
    _HMContext *_context;
    NSUUID *_identifier;
    NSArray *_containerIDs;
}

@property (nonatomic, readonly) _HMContext *context;
@property (readonly) NSUUID *identifier;
@property (nonatomic, getter=isRegistered) _Bool registered;
@property (retain, nonatomic) NSArray *containerIDs;
@property (weak) id <HMUserCloudShareManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)configure;
- (void)reconnect;
- (id)messageDestination;
- (void)__registerForMessages;
- (void)_handleDidReceiveShare:(id)arg1;
- (void)_registerWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerForContainerIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
