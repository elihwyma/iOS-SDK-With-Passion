/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDAssetTokenRequest, CKDAssetZone, NSArray, NSData, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDAssetBatch : NSObject

{
    _Bool _isFailed;
    _Bool _useMMCSEncryptionV2;
    NSMutableArray *_assetRecords;
    CKDAssetZone *_assetZone;
    NSData *_authPutRequest;
    NSData *_authPutResponse;
    NSDictionary *_authPutResponseHeaders;
    CKDAssetTokenRequest *_assetTokenRequest;
}

@property (retain, nonatomic) NSMutableArray *assetRecords;
@property (retain, nonatomic) CKDAssetZone *assetZone;
@property (retain, nonatomic) NSData *authPutRequest;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSDictionary *authPutResponseHeaders;
@property (nonatomic) _Bool isFailed;
@property (weak, nonatomic) CKDAssetTokenRequest *assetTokenRequest;
@property (readonly) unsigned int sizeUpperBound;
@property (readonly) unsigned int size;
@property (nonatomic, readonly) NSArray *allMMCSItems;
@property (nonatomic, readonly) NSArray *allMMCSSectionItems;
@property (nonatomic, readonly) NSArray *allRereferenceMMCSItems;
@property (nonatomic) _Bool useMMCSEncryptionV2;
@property (nonatomic, readonly) NSArray *allRegularAndSectionAndRereferenceItems;

- (id)description;
- (id)CKPropertiesDescription;
- (id)allMMCSAndSectionItems;
- (id)firstMMCSItemError;
- (_Bool)isEmptyOfRereferencesAssets;
- (id)initWithAssetZone:(id)arg1;
- (void)addAssetRecord:(id)arg1;
- (_Bool)isEmptyOfAssets;
- (_Bool)isRereferenceAssetBatch;
- (_Bool)isPackageSectionBatch;
- (void)failIfNotDoneAllRegularAndSectionAndRereferenceItemsWithError:(id)arg1;

@end
