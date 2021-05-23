/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, NSString;

@interface PXSmartAlbumLensModelCondition : PXSmartAlbumEXIFCondition

{
    NSArray *_lensModels;
}

@property (nonatomic, readonly) NSArray *lensModels;
@property (retain, nonatomic) NSString *lensModel;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;

@end
