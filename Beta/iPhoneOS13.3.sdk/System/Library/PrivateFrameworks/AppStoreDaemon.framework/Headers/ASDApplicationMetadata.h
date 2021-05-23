/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSNumber, NSString;

@interface ASDApplicationMetadata : NSObject <Swift>

{
    _Bool _isBeta;
    NSString *_accountName;
    NSNumber *_accountID;
    NSString *_altDSID;
    NSString *_artworkPath;
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSString *_cohort;
    NSString *_deviceVendorID;
    NSNumber *_downloaderID;
    NSNumber *_externalVersionIdentifier;
    NSNumber *_installOrder;
    NSNumber *_itemID;
    NSString *_itemName;
    NSNumber *_purchaserDSID;
    NSNumber *_storeFront;
    NSString *_vendorName;
    NSString *_shortVersion;
}

@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSNumber *accountID;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *artworkPath;
@property (nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *cohort;
@property (copy, nonatomic) NSString *deviceVendorID;
@property (copy, nonatomic) NSNumber *downloaderID;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (nonatomic) _Bool isBeta;
@property (copy, nonatomic) NSNumber *installOrder;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSNumber *purchaserDSID;
@property (copy, nonatomic) NSNumber *storeFront;
@property (copy, nonatomic) NSString *vendorName;
@property (copy, nonatomic) NSString *shortVersion;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1;

@end
