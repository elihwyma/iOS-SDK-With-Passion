/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSInformant.h>

@interface CLSNewLocationInformant : CLSInformant

+ (id)classIdentifier;
+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;
+ (id)businessItemsForRegion:(id)arg1;
+ (id)createPlaceForBusinessItem:(id)arg1;
+ (id)natureCategories;
+ (id)searchBusinessItemsAtCoordinate:(struct CLLocationCoordinate2D)arg1 forCategories:(id)arg2 precision:(double)arg3 inCache:(id)arg4;
+ (id)shiftedLocationFromOriginalLocation:(id)arg1;
+ (id)pointOfInterestCategories;
+ (_Bool)doesRegion:(id)arg1 containLocation:(id)arg2;
+ (id)areaOfInterestCategories;
+ (_Bool)doesRegion:(id)arg1 intersectOtherRegion:(id)arg2;
+ (id)filterBusinessItems:(id)arg1 forCategories:(id)arg2 subCategories:(id)arg3 blacklistCategories:(id)arg4;
+ (struct CLLocationCoordinate2D)shiftedCoordinatesFromOriginalCoordinates:(struct CLLocationCoordinate2D)arg1;
+ (id)_categoriesDescriptionFromCategories:(id)arg1;
+ (id)regionOfInterestCategories;
+ (_Bool)location:(struct CLLocationCoordinate2D)arg1 isCloseToLocation:(struct CLLocationCoordinate2D)arg2;
+ (_Bool)location:(struct CLLocationCoordinate2D)arg1 isFarFromLocation:(struct CLLocationCoordinate2D)arg2;

- (id)gatherCluesForInvestigation:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)_regionOfInterestCategories;
- (id)_pointOfInterestTraits;
- (id)_regionOfInterestTraits;
- (id)outputLocationCluesForOuputClueKey:(id)arg1 inputClue:(id)arg2 region:(id)arg3 traits:(id)arg4 categories:(id)arg5 exactMatch:(_Bool)arg6 precision:(double)arg7 cache:(id)arg8;
- (id)locationAreaOfInterestCluesForInputClue:(id)arg1;
- (id)locationPointOfInterestCluesForInputClue:(id)arg1;
- (id)locationRegionOfInterestCluesForInputClue:(id)arg1;

@end
