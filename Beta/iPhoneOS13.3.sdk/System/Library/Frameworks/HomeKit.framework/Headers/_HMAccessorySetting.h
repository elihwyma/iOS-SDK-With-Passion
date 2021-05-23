/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAccessorySettings, HMFUnfairLock, NSArray, NSMutableOrderedSet, NSString, NSUUID, _HMContext;

@protocol NSCopying><NSSecureCoding, OS_dispatch_queue, _HMAccesorySettingDelegate;

@interface _HMAccessorySetting : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    NSMutableOrderedSet *_constraints;
    _Bool _reflected;
    id <NSCopying><NSSecureCoding> _value;
    id <_HMAccesorySettingDelegate> _delegate;
    NSUUID *_identifier;
    long long _type;
    unsigned long long _properties;
    NSString *_name;
    HMAccessorySettings *_accessorySettings;
    _HMContext *_context;
}

@property (retain, nonatomic) HMAccessorySettings *accessorySettings;
@property (retain, nonatomic) _HMContext *context;
@property (weak) id <_HMAccesorySettingDelegate> delegate;
@property (copy, readonly) NSUUID *identifier;
@property (readonly) long long type;
@property (readonly) unsigned long long properties;
@property (copy, readonly) NSString *name;
@property (copy, readonly) NSArray *constraints;
@property (copy) id <NSCopying><NSSecureCoding> value;
@property (readonly, getter=isReflected) _Bool reflected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;
+ (id)logCategory;
+ (id)supportedValueClasses;
+ (id)_encodedConstraintsToRemove:(id)arg1;
+ (id)_encodedConstraintsToAdd:(id)arg1;
+ (id)_replaceConstraintsPayloadWithAdditions:(id)arg1 removals:(id)arg2;
+ (id)supportedConstraintClasses;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (void)addConstraint:(id)arg1;
- (void)removeConstraint:(id)arg1;
- (void)setConstraints:(id)arg1;
- (id)logIdentifier;
- (_Bool)mergeObject:(id)arg1;
- (id)descriptionWithPointer:(_Bool)arg1;
- (void)updateValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_registerNotificationHandlers;
- (id)messageDestination;
- (void)configureWithAccessorySettings:(id)arg1 context:(id)arg2;
- (void)_handleUpdatedValue:(id)arg1;
- (void)_handleAddedConstraint:(id)arg1;
- (void)_handleRemovedConstraint:(id)arg1;
- (void)_handleReflectedUpdate:(id)arg1;
- (void)notifyDelegateOfAddedConstraint:(id)arg1;
- (void)notifyDelegateOfRemovedConstraint:(id)arg1;
- (void)setReflected:(_Bool)arg1;
- (_Bool)mergeConstraints:(id)arg1;
- (id)initWithType:(long long)arg1 properties:(unsigned long long)arg2 name:(id)arg3 constraints:(id)arg4;
- (id)constraintWithType:(long long)arg1;
- (void)addConstraint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeConstraint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)replaceConstraints:(id)arg1 withConstraints:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateConstraints:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
