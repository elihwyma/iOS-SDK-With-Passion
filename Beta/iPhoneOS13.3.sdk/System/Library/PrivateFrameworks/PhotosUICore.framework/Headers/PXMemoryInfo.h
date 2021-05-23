/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PHAsset, PHAssetCollection, PHFetchResult;

@interface PXMemoryInfo : NSObject <Swift>

{
    NSString *_localizedDateText;
    NSString *_localizedTitle;
    PHAssetCollection *_assetCollection;
    PHFetchResult *_keyAssetFetchResult;
}

@property (nonatomic, readonly) NSString *localizedDateText;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHAsset *primaryAsset;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) PHFetchResult *keyAssetFetchResult;

+ (id)fastMemoryInfoWithMemory:(id)arg1;
+ (id)memoryInfoWithMemory:(id)arg1;
+ (id)memoryInfoWithAssetCollection:(id)arg1 keyAssetFetchResult:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)memoryInfoWithUpdatedKeyAssetFetchResult:(id)arg1;

@end
