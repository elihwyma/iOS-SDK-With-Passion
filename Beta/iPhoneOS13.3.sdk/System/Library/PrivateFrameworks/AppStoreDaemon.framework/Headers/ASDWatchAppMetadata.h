/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSNumber, NSString;

@interface ASDWatchAppMetadata : NSObject <Swift>

{
    _Bool _skipIfInstalled;
    NSString *_altDSID;
    NSString *_appleID;
    NSString *_bundleID;
    NSNumber *_downloaderID;
    NSNumber *_externalVersionID;
    NSNumber *_itemID;
    NSNumber *_previousExternalVersionID;
    NSString *_previousVariantID;
    NSNumber *_purchaserID;
    NSString *_redownloadParams;
}

@property _Bool skipIfInstalled;
@property (copy) NSString *altDSID;
@property (copy) NSString *appleID;
@property (copy) NSString *bundleID;
@property (copy) NSNumber *downloaderID;
@property (copy) NSNumber *externalVersionID;
@property (copy) NSNumber *itemID;
@property (copy) NSNumber *previousExternalVersionID;
@property (copy) NSString *previousVariantID;
@property (copy) NSNumber *purchaserID;
@property (copy) NSString *redownloadParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) long long metadataType;

+ (_Bool)supportsSecureCoding;
+ (id)metadataFromStoreMetadata:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreMetadata:(id)arg1;
- (id)initWithItemID:(id)arg1 externalVersionID:(id)arg2;
- (id)initWithItemID:(id)arg1;

@end
