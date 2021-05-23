/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, NSDate, NSNumber, PXLabeledValue;

@interface PXSmartAlbumDateValueCondition : PXSmartAlbumCondition

{
    NSArray *_unitValues;
}

@property (retain, nonatomic) NSDate *dateValue;
@property (retain, nonatomic) NSDate *secondDateValue;
@property (nonatomic, readonly) _Bool hasNumberOfUnitValue;
@property (retain, nonatomic) NSNumber *numberOfUnitValue;
@property (nonatomic, readonly) NSArray *unitValues;
@property (retain, nonatomic) PXLabeledValue *unitValue;

- (void)setComparatorValue:(id)arg1;
- (long long)comparatorMode;

@end
