/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMActionSet, HMFUnfairLock, NSString, NSUUID, _HMContext;

@interface HMAction : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    NSUUID *_uniqueIdentifier;
    NSUUID *_uuid;
    HMActionSet *_actionSet;
    _HMContext *_context;
    unsigned long long _type;
}

@property (retain, nonatomic) _HMContext *context;
@property (readonly) unsigned long long type;
@property (copy) NSUUID *uuid;
@property (weak) HMActionSet *actionSet;
@property (readonly, getter=isValid) _Bool valid;
@property (readonly) _Bool requiresDeviceUnlock;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (unsigned long long)actionType;
- (_Bool)_handleUpdates:(id)arg1;
- (id)_serializeForAdd;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)encodeAsProtoBuf;
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;

@end
