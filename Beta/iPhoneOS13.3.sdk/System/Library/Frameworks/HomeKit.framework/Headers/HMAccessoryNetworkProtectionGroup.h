/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAccessoryCategory, HMFUnfairLock, HMHome, NSArray, NSString, NSUUID;

@interface HMAccessoryNetworkProtectionGroup : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    HMHome *_home;
    NSUUID *_uniqueIdentifier;
    NSString *_manufacturer;
    HMAccessoryCategory *_category;
    long long _targetProtectionMode;
    NSUUID *_uuid;
}

@property (weak) HMHome *home;
@property (readonly) NSUUID *uuid;
@property (copy) NSString *manufacturer;
@property (retain) HMAccessoryCategory *category;
@property long long targetProtectionMode;
@property (readonly) NSUUID *uniqueIdentifier;
@property (copy, readonly) NSArray *accessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_configureWithHome:(id)arg1;
- (id)initWithUUID:(id)arg1 manufacturer:(id)arg2 category:(id)arg3 protectionMode:(long long)arg4;
- (void)updateProtectionMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
