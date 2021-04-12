//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFObject-Protocol.h>

@class HMDAssistantAccessControlModel, HMDUser, NSArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAssistantAccessControl : HMFObject <HMFLogging, HMFObject, NSSecureCoding, HMDBackingStoreObjectProtocol>
{
    NSMutableSet *_accessories;
    BOOL _enabled;
    HMDUser *_user;
    NSUInteger _cachedHash;
    NSUInteger _options;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)modelIDNamespace;
+ (id)accessControlWithMessage:(id)arg1 user:(id)arg2 error:(id )arg3;
+ (BOOL)isAccessorySupported:(id)arg1;
@property(readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (id)assistantAccessControlModelWithRemovedAccessories:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(NSUInteger)arg1;
@property(readonly, copy) HMDAssistantAccessControlModel *model;
@property(readonly, copy) NSUUID *modelID;
- (void)notifyClientOfUpdateWithMessage:(id)arg1;
- (void)removeAccessoriesAddedByOldController:(id)arg1;
- (void)handleRemovedAccessory:(id)arg1;
- (void)removeAccessory:(id)arg1;
- (void)addAccessory:(id)arg1;
@property(readonly, copy) NSArray *accessories;
@property NSUInteger options; // @synthesize options=_options;
@property(readonly, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property __weak HMDUser *user; // @synthesize user=_user;
@property(readonly) NSUInteger cachedHash; // @synthesize cachedHash=_cachedHash;
@property(readonly, copy) NSString *propertyDescription;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (void)dealloc;
- (void)configure;
- (id)initWithUser:(id)arg1;
- (id)initWithUser:(id)arg1 accessories:(id)arg2 enabled:(BOOL)arg3;
- (id)initWithUser:(id)arg1 model:(id)arg2;
- (id)init;

@end

