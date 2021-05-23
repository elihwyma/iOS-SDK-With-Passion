/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString, SSItemContentRating;

@interface ISSoftwareApplication : NSObject

{
    NSNumber *_accountDSID;
    NSString *_accountIdentifier;
    _Bool _beta;
    NSString *_bundleIdentifier;
    NSString *_bundleShortVersionString;
    NSString *_bundleVersion;
    NSString *_containerPath;
    SSItemContentRating *_contentRating;
    NSString *_deviceIdentifierForVendor;
    NSNumber *_familyAccountIdentifier;
    _Bool _hasMIDBasedSINF;
    NSNumber *_itemIdentifier;
    NSString *_itemName;
    _Bool _missingRequiredSINF;
    _Bool _placeholder;
    _Bool _profileValidated;
    NSString *_softwareType;
    NSNumber *_storeFrontIdentifier;
    NSString *_vendorName;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
    NSDate *_receiptExpirationDate;
    unsigned long long _vppStateFlags;
    _Bool _launchProhibited;
    _Bool _didCheckLaunchProhibited;
    unsigned long long _removableStatus;
}

@property (nonatomic) _Bool didCheckLaunchProhibited;
@property (nonatomic, readonly) NSDate *receiptExpirationDate;
@property (nonatomic, readonly) unsigned long long removableStatus;
@property (nonatomic, readonly) unsigned long long vppStateFlags;
@property (retain, nonatomic) NSNumber *accountDSID;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic, getter=isBeta) _Bool beta;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleShortVersionString;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *containerPath;
@property (copy, nonatomic) SSItemContentRating *contentRating;
@property (copy, nonatomic) NSString *deviceIdentifierForVendor;
@property (copy, nonatomic) NSNumber *familyAccountIdentifier;
@property (retain, nonatomic) NSNumber *itemIdentifier;
@property (copy, nonatomic) NSString *itemName;
@property (nonatomic, getter=isLaunchProhibited) _Bool launchProhibited;
@property (nonatomic, getter=isPlaceholder) _Bool placeholder;
@property (nonatomic, getter=isProfileValidated) _Bool profileValidated;
@property (copy, nonatomic) NSString *softwareType;
@property (retain, nonatomic) NSNumber *storeFrontIdentifier;
@property (copy, nonatomic) NSString *vendorName;
@property (retain, nonatomic) NSNumber *versionIdentifier;
@property (copy, nonatomic) NSArray *versionOrdering;
@property (nonatomic) _Bool hasMIDBasedSINF;
@property (nonatomic) _Bool missingRequiredSINF;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithLaunchServicesApplication:(id)arg1 containerPath:(id)arg2;
- (void)_loadMetadataFromContainer:(id)arg1;
- (id)initWithLaunchServicesApplication:(id)arg1;
- (void)resetVPPStateFlags;
- (id)ITunesMetadataDictionary;

@end
