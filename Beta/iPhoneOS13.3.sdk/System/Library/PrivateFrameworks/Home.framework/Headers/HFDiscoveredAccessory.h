/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class HMAccessory, HMAccessoryCategory, NSDate, NSError, NSString, NSUUID, SFDevice;

@interface HFDiscoveredAccessory : NSObject <Swift>

{
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    HMAccessoryCategory *_category;
    HMAccessory *_accessory;
    SFDevice *_sharingDevice;
    NSString *_manufacturer;
    NSDate *_discoveryDate;
    unsigned long long _status;
    NSError *_error;
    unsigned long long _certificationStatus;
}

@property (retain, nonatomic) HMAccessory *accessory;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMAccessoryCategory *category;
@property (copy, nonatomic) NSString *manufacturer;
@property (nonatomic) unsigned long long certificationStatus;
@property (nonatomic, readonly) SFDevice *sharingDevice;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSDate *discoveryDate;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) _Bool requiresSetupCode;
@property (nonatomic, readonly) _Bool requiresSoftwareUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)discoveredAccessoryFromSetupDescription:(id)arg1;

- (id)init;
- (id)initWithAccessory:(id)arg1;
- (void)updateStatus:(unsigned long long)arg1 error:(id)arg2;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3;
- (id)_descriptionForStatus:(unsigned long long)arg1;
- (id)initWithSharingDevice:(id)arg1;
- (id)identify;

@end
