/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumShutterSpeedCondition : PXSmartAlbumEXIFCondition

{
    NSArray *_shutterSpeedValues;
}

@property (nonatomic, readonly) NSArray *shutterSpeedValues;
@property (retain, nonatomic) PXLabeledValue *shutterSpeedValue;
@property (retain, nonatomic) PXLabeledValue *secondShutterSpeedValue;

+ (id)formatter;
+ (id)defaultSingleQueryForEditingContext:(id)arg1;

@end
