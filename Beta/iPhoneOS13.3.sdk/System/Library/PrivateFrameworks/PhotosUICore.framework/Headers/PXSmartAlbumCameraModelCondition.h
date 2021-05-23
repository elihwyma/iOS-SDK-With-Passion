/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, NSString;

@interface PXSmartAlbumCameraModelCondition : PXSmartAlbumEXIFCondition

{
    NSArray *_cameraModels;
}

@property (nonatomic, readonly) NSArray *cameraModels;
@property (retain, nonatomic) NSString *cameraModel;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;

@end
