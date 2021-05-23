/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/Swift-Protocol.h>

@class NSObject, NSUUID;

@protocol OS_dispatch_queue;

@protocol HMFMessageReceiver <Swift>

@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

@end
