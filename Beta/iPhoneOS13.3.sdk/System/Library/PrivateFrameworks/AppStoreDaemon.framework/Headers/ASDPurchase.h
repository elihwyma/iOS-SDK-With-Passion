/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface ASDPurchase : NSObject <Swift>

{
    NSArray *_buyParameters;
    _Bool _createsJobs;
    _Bool _displaysOnLockScreen;
    _Bool _installUniversalVariant;
    _Bool _isDSIDLess;
    _Bool _isUpdate;
    _Bool _isBackgroundUpdate;
    _Bool _isRedownload;
    _Bool _shouldCancelForInstalledBundleItems;
    _Bool _isCompatibilityUpdate;
    _Bool _isRefresh;
    _Bool _sendGUID;
    NSString *_bundleID;
    NSNumber *_itemID;
    NSString *_itemName;
    NSString *_vendorName;
    NSDictionary *_additionalHeaders;
    NSNumber *_accountIdentifier;
    NSString *_affiliateIdentifier;
    NSString *_bagKey;
    long long _extensionsToEnable;
    NSArray *_gratisIdentifiers;
    NSString *_referrerName;
    NSString *_referrerURL;
    long long _purchaseID;
    NSArray *_requiredCapabilities;
    NSString *_preflightURLString;
    NSString *_clientID;
    NSNumber *_ownerDSID;
    NSNumber *_purchaserDSID;
}

@property (copy, nonatomic) NSString *clientID;
@property (nonatomic) _Bool isCompatibilityUpdate;
@property (nonatomic) _Bool isRefresh;
@property (copy, nonatomic) NSNumber *ownerDSID;
@property (copy, nonatomic) NSNumber *purchaserDSID;
@property (nonatomic) _Bool sendGUID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *buyParameters;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *vendorName;
@property (copy, nonatomic) NSDictionary *additionalHeaders;
@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *affiliateIdentifier;
@property (copy, nonatomic) NSString *bagKey;
@property (nonatomic) _Bool createsJobs;
@property (nonatomic) _Bool displaysOnLockScreen;
@property long long extensionsToEnable;
@property (copy, nonatomic) NSArray *gratisIdentifiers;
@property (nonatomic) _Bool installUniversalVariant;
@property (nonatomic) _Bool isDSIDLess;
@property (nonatomic) _Bool isUpdate;
@property (nonatomic) _Bool isBackgroundUpdate;
@property (copy, nonatomic) NSString *referrerName;
@property (copy, nonatomic) NSString *referrerURL;
@property (nonatomic) _Bool isRedownload;
@property long long purchaseID;
@property (copy, nonatomic) NSArray *requiredCapabilities;
@property (nonatomic) _Bool shouldCancelForInstalledBundleItems;
@property (copy) NSString *preflightURLString;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)appendValue:(id)arg1 forBuyParameter:(id)arg2;
- (id)firstValueForBuyParameter:(id)arg1;

@end
