/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class NSString, NSUUID;

@protocol REMReplicaManagerClient <Swift>

@property (nonatomic, readonly) NSString *crdtID;
@property (nonatomic, readonly) NSUUID *replicaUUID;

@end
