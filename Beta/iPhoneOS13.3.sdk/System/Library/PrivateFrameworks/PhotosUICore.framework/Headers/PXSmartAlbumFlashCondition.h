/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumFlashCondition : PXSmartAlbumCondition

{
    NSArray *_flashFiredValues;
}

@property (nonatomic, readonly) NSArray *flashFiredValues;
@property (retain, nonatomic) PXLabeledValue *flashFiredValue;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;

@end
