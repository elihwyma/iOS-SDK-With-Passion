/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID, REMReplicaIDSource, REMReplicaManager;

@protocol REMReplicaClockProviding, REMReplicaIDHelperOwner, REMReplicaManagerProviding;

@interface REMReplicaIDHelper : NSObject

{
    id <REMReplicaClockProviding> _replicaClockProvider;
    REMReplicaIDSource *_replicaIDSource;
    id <REMReplicaIDHelperOwner> _owner;
    NSUUID *_acquiredReplicaUUID;
    id <REMReplicaManagerProviding> _lazilyCachedReplicaManagerProvider;
}

@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource;
@property (weak, nonatomic) id <REMReplicaIDHelperOwner> owner;
@property (retain, nonatomic) NSUUID *acquiredReplicaUUID;
@property (retain, nonatomic) id <REMReplicaManagerProviding> lazilyCachedReplicaManagerProvider;
@property (nonatomic, readonly) REMReplicaManager *replicaManager;
@property (retain, nonatomic) id <REMReplicaClockProviding> replicaClockProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *crdtID;
@property (nonatomic, readonly) NSUUID *replicaUUID;

+ (id)replicaUUIDForCreation;
+ (id)nonEditingReplicaUUID;

- (void)dealloc;
- (id)clockElementListForReplicaUUID:(id)arg1;
- (id)initWithReplicaIDSource:(id)arg1 owner:(id)arg2 replicaClockProvider:(id)arg3;
- (void)didCopy;
- (void)willEdit;
- (void)didSerialize;

@end
