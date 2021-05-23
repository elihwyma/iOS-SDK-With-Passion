/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAccessory, HMAccessoryCategory, HMAccessoryOwnershipToken, HMSetupAccessoryBrowsingRequest, HMSetupAccessoryPayload, NSString, NSUUID;

@interface HMSetupAccessoryDescription : NSObject <Swift>

{
    _Bool _supportsIP;
    _Bool _supportsBTLE;
    _Bool _supportsWAC;
    _Bool _paired;
    _Bool _isTrustedOrigin;
    _Bool _userConsentedForReplace;
    _Bool _addAndSetupAccessories;
    _Bool _legacyAPI;
    NSString *_setupID;
    NSString *_setupCode;
    HMAccessoryOwnershipToken *_ownershipToken;
    HMAccessoryCategory *_category;
    unsigned long long _certificationStatus;
    unsigned long long _userConsentReasons;
    NSString *_storeID;
    NSString *_bundleID;
    NSUUID *_accessoryUUID;
    NSString *_accessoryName;
    NSString *_manufacturerName;
    NSString *_appIdentifier;
    NSUUID *_homeUUID;
    NSString *_homeName;
    NSString *_suggestedRoomName;
    HMSetupAccessoryPayload *_setupAccessoryPayload;
    HMSetupAccessoryBrowsingRequest *_accessoryBrowsingRequest;
    HMAccessory *_accessoryBeingReplaced;
    NSUUID *_addRequestIdentifier;
    NSString *_accessoryServerIdentifier;
}

@property (retain, nonatomic) NSString *appIdentifier;
@property (retain, nonatomic) HMSetupAccessoryPayload *setupAccessoryPayload;
@property (nonatomic) _Bool addAndSetupAccessories;
@property (nonatomic) _Bool isTrustedOrigin;
@property (retain, nonatomic) HMSetupAccessoryBrowsingRequest *accessoryBrowsingRequest;
@property (retain, nonatomic) NSString *accessoryName;
@property (retain, nonatomic) NSString *manufacturerName;
@property (retain, nonatomic) HMAccessoryCategory *category;
@property (retain, nonatomic) NSUUID *accessoryUUID;
@property (copy, nonatomic) NSString *suggestedRoomName;
@property (retain, nonatomic) NSString *storeID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic, readonly) NSString *setupID;
@property (retain, nonatomic) NSString *setupCode;
@property (nonatomic, readonly) HMAccessoryOwnershipToken *ownershipToken;
@property (retain, nonatomic) NSUUID *addRequestIdentifier;
@property (nonatomic) _Bool legacyAPI;
@property (nonatomic, readonly) _Bool supportsIP;
@property (nonatomic, readonly) _Bool supportsWAC;
@property (nonatomic, readonly) _Bool supportsBTLE;
@property (nonatomic, readonly, getter=isPaired) _Bool paired;
@property (nonatomic) unsigned long long certificationStatus;
@property (nonatomic) _Bool userConsentedForReplace;
@property (weak, nonatomic) HMAccessory *accessoryBeingReplaced;
@property (retain, nonatomic) NSString *accessoryServerIdentifier;
@property (nonatomic, readonly) _Bool hasAddRequest;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) NSString *homeName;
@property (nonatomic, readonly) unsigned long long userConsentReasons;

+ (_Bool)supportsSecureCoding;
+ (id)setupAccessoryProgressAsString:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dumpState;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 appID:(id)arg3 homeName:(id)arg4 homeUUID:(id)arg5 trustedOrigin:(_Bool)arg6;
- (id)initToSetupAccessories:(id)arg1 legacyAPI:(_Bool)arg2 homeName:(id)arg3 homeUUID:(id)arg4 trustedOrigin:(_Bool)arg5;
- (id)initToSetupAccessories:(id)arg1 legacyAPI:(_Bool)arg2 homeName:(id)arg3 homeUUID:(id)arg4 trustedOrigin:(_Bool)arg5 browseRequest:(id)arg6;
- (id)initToSetupAccessoriesWithSetupAccessoryPayload:(id)arg1 appID:(id)arg2 homeName:(id)arg3 homeUUID:(id)arg4 trustedOrigin:(_Bool)arg5 ownershipToken:(id)arg6;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 appID:(id)arg3 homeName:(id)arg4 homeUUID:(id)arg5;
- (id)initToSetupAccessories:(id)arg1 legacyAPI:(_Bool)arg2 homeName:(id)arg3 homeUUID:(id)arg4;
- (id)initToSetupAccessoriesWithSetupAccessoryPayload:(id)arg1 appID:(id)arg2 homeName:(id)arg3 homeUUID:(id)arg4;
- (id)initWithAddRequest:(id)arg1 setupAccessoryPayload:(id)arg2 appID:(id)arg3 ownershipToken:(id)arg4;
- (void)updateWithSetupAccessoryPayload:(id)arg1;
- (void)updateWithAccessory:(id)arg1;
- (void)updateOwnershipToken:(id)arg1;
- (void)updateAppIdentifier:(id)arg1;

@end
