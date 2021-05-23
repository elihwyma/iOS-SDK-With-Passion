/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMFKey, HMFUnfairLock, NSArray, NSString, NSUUID;

@interface HMDevice : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    _Bool _currentDevice;
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    HMFKey *_rapportIRK;
    NSUUID *_idsIdentifier;
    NSUUID *_uuid;
}

@property (copy, readonly) NSUUID *idsIdentifier;
@property (copy) HMFKey *rapportIRK;
@property (copy, nonatomic, readonly) NSUUID *uuid;
@property (copy) NSString *name;
@property (copy, readonly) NSUUID *uniqueIdentifier;
@property (readonly, getter=isCurrentDevice) _Bool currentDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *shortDescription;
@property (copy, readonly) NSString *privateDescription;
@property (copy, readonly) NSString *propertyDescription;
@property (copy, nonatomic, readonly) NSArray *attributeDescriptions;

+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)IDSDeviceForIDSService:(id)arg1;

@end
