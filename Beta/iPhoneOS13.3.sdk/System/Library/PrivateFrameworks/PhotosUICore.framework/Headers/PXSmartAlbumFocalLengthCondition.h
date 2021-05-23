/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumFocalLengthCondition : PXSmartAlbumEXIFCondition

{
    NSArray *_focalLengthValues;
}

@property (nonatomic, readonly) NSArray *focalLengthValues;
@property (retain, nonatomic) PXLabeledValue *focalLengthValue;
@property (retain, nonatomic) PXLabeledValue *secondFocalLengthValue;

+ (id)formatter;
+ (id)defaultSingleQueryForEditingContext:(id)arg1;

@end
