/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NRRegistry, NSMutableArray, NSMutableDictionary, NSPointerArray, NSUUID;

@interface NRDevice : NSObject <Swift>

{
    NRDevice *_me;
    struct os_unfair_lock_s _lock;
    NSUUID *_pairingID;
    NRRegistry *_registry;
    NSMutableDictionary *_oldPropertiesForChangeNotifications;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_observers;
    NSPointerArray *_promiscuousObservers;
    NSMutableDictionary *_changeBlocks;
    NSMutableArray *_promiscuousChangeBlocks;
}

@property (retain, nonatomic) NRRegistry *registry;
@property (retain, nonatomic) NSUUID *pairingID;
@property (retain, nonatomic) NSMutableDictionary *oldPropertiesForChangeNotifications;
@property (retain, nonatomic) NSMutableDictionary *properties;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (retain, nonatomic) NSPointerArray *promiscuousObservers;
@property (retain, nonatomic) NSMutableDictionary *changeBlocks;
@property (retain, nonatomic) NSMutableArray *promiscuousChangeBlocks;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)registerForPropertyChanges:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)unregisterForPropertyChanges:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)supportsCapability:(id)arg1;
- (void)addPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (id)propertyNames;
- (void)removePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (id)initWithRegistry:(id)arg1 diff:(id)arg2 pairingID:(id)arg3 notify:(_Bool)arg4;
- (_Bool)canMigrate;
- (_Bool)archived;
- (id)migrationError;
- (_Bool)migrationConfirmed;
- (void)_fireChangeNotificationsForDiff:(id)arg1 secureProperties:(id)arg2 notify:(_Bool)arg3;
- (void)_updateSelfRetain;
- (void)_notifySecurePropertiesWithCollection:(id)arg1 secureProperties:(id)arg2;
- (void)_queueFirePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2;
- (void)queueAddPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)queueRemovePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (void)postNotification:(id)arg1 withUserInfo:(id)arg2;
- (void)queueRegisterForPropertyChanges:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)queueUnregisterForPropertyChanges:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
