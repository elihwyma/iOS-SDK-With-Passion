/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAccessory, HMFUnfairLock, HMMediaProfile, HMMediaSystemRole, NSString, NSUUID;

@interface HMMediaSystemComponent : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    HMMediaProfile *_mediaProfile;
    HMMediaSystemRole *_role;
    NSUUID *_uniqueIdentifier;
    HMAccessory *_accessory;
    NSUUID *_uuid;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (weak, nonatomic) HMAccessory *accessory;
@property (weak, nonatomic, readonly) HMMediaProfile *mediaProfile;
@property (nonatomic, readonly) HMMediaSystemRole *role;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)mediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serialize;
- (void)setRole:(id)arg1;
- (id)logIdentifier;
- (id)initWithMediaProfile:(id)arg1 role:(id)arg2;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_updateAccessoryReference:(id)arg1;
- (id)initWithUUID:(id)arg1 mediaProfile:(id)arg2 role:(id)arg3;

@end
