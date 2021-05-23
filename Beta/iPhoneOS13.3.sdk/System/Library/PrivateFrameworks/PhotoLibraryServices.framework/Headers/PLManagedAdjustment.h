/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/_PLManagedAdjustment.h>

@class NSDictionary, NSNumber, NSString, PLManagedAsset;

@interface PLManagedAdjustment : _PLManagedAdjustment

@property (nonatomic) int adjustmentType;
@property (copy, nonatomic) NSString *filterName;
@property (copy, nonatomic) NSDictionary *filterSettings;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (copy, nonatomic) NSNumber *identifier;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityName;
+ (id)insertInPhotoLibrary:(id)arg1;
+ (struct CGRect)convertCropRect:(struct CGRect)arg1 fromImageSize:(struct CGSize)arg2 toImageSize:(struct CGSize)arg3;
+ (void)convertAffineTransform:(struct CGAffineTransform)arg1 andCropRect:(struct CGRect)arg2 toStraightenAngle:(double *)arg3 andCropRect:(struct CGRect *)arg4;
+ (void)convertStraightenAngle:(double)arg1 andCropRect:(struct CGRect)arg2 toAffineTransform:(struct CGAffineTransform *)arg3 andCropRect:(struct CGRect *)arg4;
+ (id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(struct CGSize)arg2;
+ (id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(struct CGSize)arg2 effectFilterCount:(unsigned long long *)arg3;
+ (id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(struct CGSize)arg2 withOriginalImageSize:(struct CGSize)arg3 effectFilterCount:(unsigned long long *)arg4;
+ (void)fixupAssetSizeFromAdjustments:(id)arg1;

- (id)metadataProperties;

@end
