/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumISOCondition : PXSmartAlbumEXIFCondition

{
    NSArray *_ISOValues;
}

@property (nonatomic, readonly) NSArray *ISOValues;
@property (retain, nonatomic) PXLabeledValue *ISOValue;
@property (retain, nonatomic) PXLabeledValue *secondISOValue;

+ (id)formatter;
+ (id)defaultSingleQueryForEditingContext:(id)arg1;

@end
