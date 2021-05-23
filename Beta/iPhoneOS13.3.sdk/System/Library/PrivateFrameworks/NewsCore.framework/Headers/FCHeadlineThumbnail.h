/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCAssetHandle;

@interface FCHeadlineThumbnail : NSObject

{
    FCAssetHandle *_thumbnailAssetHandle;
    struct CGSize _thumbnailSize;
}

@property (retain, nonatomic) FCAssetHandle *thumbnailAssetHandle;
@property (nonatomic) struct CGSize thumbnailSize;

+ (id)headlineThumbnailWithAssetHandle:(id)arg1 thumbnailSize:(struct CGSize)arg2;

@end
