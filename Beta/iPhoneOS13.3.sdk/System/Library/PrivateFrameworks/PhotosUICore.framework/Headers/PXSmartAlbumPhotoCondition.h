/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumPhotoCondition : PXSmartAlbumCondition

{
    NSArray *_photoTypeValues;
}

@property (nonatomic, readonly) NSArray *photoTypeValues;
@property (retain, nonatomic) PXLabeledValue *photoTypeValue;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;

@end
