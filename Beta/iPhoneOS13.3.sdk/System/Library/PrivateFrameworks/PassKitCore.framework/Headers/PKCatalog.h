/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSMutableArray;

@interface PKCatalog : NSObject <Swift>

{
    NSMutableArray *_groups;
    NSDate *_timestamp;
}

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSMutableArray *groups;

+ (_Bool)supportsSecureCoding;
+ (id)cloudStoreCatalogRecordTypeRecordNamePrefix;
+ (id)catalogWithLocalCatalog:(id)arg1 ubiquitousCatalog:(id)arg2;
+ (id)catalogWithContentsOfURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemType;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)recordTypesAndNames;
- (void)writeToURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2 atomically:(_Bool)arg3;
- (_Bool)isEquivalentToCatalog:(id)arg1;
- (_Bool)isNewerThanCatalog:(id)arg1;
- (id)allGroupIDs;
- (void)shuffle:(int)arg1;

@end
