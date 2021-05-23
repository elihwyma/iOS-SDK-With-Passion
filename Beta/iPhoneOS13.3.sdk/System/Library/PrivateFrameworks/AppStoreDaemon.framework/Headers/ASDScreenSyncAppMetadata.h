/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSNumber, NSString;

@interface ASDScreenSyncAppMetadata : NSObject <Swift>

{
    NSString *_accountName;
    NSString *_bundleID;
    NSNumber *_externalVersionIdentifier;
    NSNumber *_itemID;
    NSString *_itemName;
    NSNumber *_purchaserDSID;
    NSNumber *_storeFront;
    NSString *_vendorName;
}

@property (copy) NSString *accountName;
@property (readonly) NSString *bundleID;
@property (copy) NSNumber *externalVersionIdentifier;
@property (copy) NSNumber *itemID;
@property (copy) NSString *itemName;
@property (copy) NSNumber *purchaserDSID;
@property (copy) NSNumber *storeFront;
@property (copy) NSString *vendorName;
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
