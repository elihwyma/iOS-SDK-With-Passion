/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumApertureCondition : PXSmartAlbumEXIFCondition

{
    NSArray *_apertureValues;
}

@property (nonatomic, readonly) NSArray *apertureValues;
@property (retain, nonatomic) PXLabeledValue *apertureValue;
@property (retain, nonatomic) PXLabeledValue *secondApertureValue;

+ (id)formatter;
+ (id)defaultSingleQueryForEditingContext:(id)arg1;

@end
