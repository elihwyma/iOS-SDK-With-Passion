/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMFUnfairLock, HMHome, HMMutableArray, NSArray, NSString, NSUUID, _HMContext;

@protocol OS_dispatch_queue;

@interface HMZone : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    HMHome *_home;
    NSUUID *_uuid;
    _HMContext *_context;
    HMMutableArray *_currentRooms;
}

@property (retain, nonatomic) _HMContext *context;
@property (retain, nonatomic) HMMutableArray *currentRooms;
@property (nonatomic, readonly) NSUUID *uuid;
@property (weak, nonatomic) HMHome *home;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSArray *rooms;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUuid:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_unconfigure;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)roomWithUUID:(id)arg1;
- (void)_removeRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeRoom:(id)arg1;
- (void)removeRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleRoomAddedNotification:(id)arg1;
- (void)_handleRoomRemovedNotification:(id)arg1;
- (void)_handleZoneRenamedNotification:(id)arg1;
- (void)addRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
