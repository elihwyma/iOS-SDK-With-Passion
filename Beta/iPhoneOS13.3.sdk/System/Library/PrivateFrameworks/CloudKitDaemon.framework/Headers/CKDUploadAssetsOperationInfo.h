/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CKDUploadAssetsOperationInfo : CKDatabaseOperationInfo

{
    _Bool _temporary;
    NSArray *_assetsToUpload;
    NSDictionary *_assetUUIDToExpectedProperties;
    NSDictionary *_packageUUIDToExpectedProperties;
}

@property (retain, nonatomic) NSArray *assetsToUpload;
@property (retain, nonatomic) NSDictionary *assetUUIDToExpectedProperties;
@property (retain, nonatomic) NSDictionary *packageUUIDToExpectedProperties;
@property (nonatomic) _Bool temporary;

@end
