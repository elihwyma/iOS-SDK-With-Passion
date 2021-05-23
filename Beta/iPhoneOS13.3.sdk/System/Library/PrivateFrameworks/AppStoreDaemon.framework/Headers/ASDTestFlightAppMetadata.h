/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class ACAccount, NSArray, NSData, NSNumber, NSString, NSURL;

@interface ASDTestFlightAppMetadata : NSObject <Swift>

{
    _Bool _hasMessagesExtension;
    _Bool _launchProhibited;
    ACAccount *_account;
    NSURL *_artworkURL;
    NSString *_bundleID;
    NSString *_companionBundleID;
    NSNumber *_externalVersionIdentifier;
    NSNumber *_initialODRSize;
    NSNumber *_itemID;
    NSString *_itemName;
    NSURL *_messagesArtworkURL;
    NSData *_packageDPInfo;
    NSData *_packageSINF;
    NSURL *_packageURL;
    NSArray *_provisioningProfiles;
    NSString *_storeCohort;
    NSNumber *_storeFront;
    NSString *_variantID;
    NSString *_vendorName;
}

@property (copy, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSURL *artworkURL;
@property (nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic) NSString *companionBundleID;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (nonatomic) _Bool hasMessagesExtension;
@property (copy, nonatomic) NSNumber *initialODRSize;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (nonatomic, getter=isLaunchProhibited) _Bool launchProhibited;
@property (copy, nonatomic) NSURL *messagesArtworkURL;
@property (copy, nonatomic) NSData *packageDPInfo;
@property (copy, nonatomic) NSData *packageSINF;
@property (copy, nonatomic) NSURL *packageURL;
@property (copy, nonatomic) NSArray *provisioningProfiles;
@property (copy, nonatomic) NSString *storeCohort;
@property (copy, nonatomic) NSNumber *storeFront;
@property (copy, nonatomic) NSString *variantID;
@property (copy, nonatomic) NSString *vendorName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) long long metadataType;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1;

@end
