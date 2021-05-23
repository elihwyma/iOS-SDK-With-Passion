/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCAssetHandle;

@interface FCIssueThumbnail : NSObject

{
    FCAssetHandle *_thumbnailAssetHandle;
    struct CGSize _thumbnailSize;
}

@property (retain, nonatomic) FCAssetHandle *thumbnailAssetHandle;
@property (nonatomic) struct CGSize thumbnailSize;

+ (id)issueThumbnailWithAssetHandle:(id)arg1 thumbnailSize:(struct CGSize)arg2;

@end
