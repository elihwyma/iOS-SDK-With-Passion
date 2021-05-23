/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <MediaMiningKit/CLSProfile.h>

@interface PGPhotosGraphProfile : CLSProfile

+ (id)classIdentifier;
+ (id)informantDependenciesIdentifiers;
+ (id)profileDependenciesIdentifiers;
+ (id)supportedMeaningClueKeys;
+ (id)blacklistedNamesToTraverse;
+ (id)blacklistedNames;
+ (_Bool)isBlacklistedNode:(id)arg1;
+ (id)poiUnknown;
+ (id)poiRestaurant;
+ (id)poiNightlife;
+ (id)poiShopping;
+ (id)poiTravel;
+ (id)poiCulture;
+ (id)poiMuseum;
+ (id)poiEntertainment;
+ (id)poiAmusementPark;
+ (id)poiPark;
+ (id)poiPerformance;
+ (id)poiStadium;
+ (id)poiActivity;
+ (id)poiDiving;
+ (id)poiHiking;
+ (id)poiFitness;
+ (id)poiHospital;
+ (id)roiUrban;
+ (id)roiBeach;
+ (id)roiNature;
+ (id)roiWater;
+ (id)roiMoutain;
+ (id)partOfDayMorning;
+ (id)partOfDayNoon;
+ (id)partOfDayAfternoon;
+ (id)partOfDayEvening;
+ (id)partOfDayNight;

- (void)processResultsSynchronouslyForInvestigation:(id)arg1 withProgressBlock:(CDUnknownBlockType)arg2;
- (void)_insertEventCluesForClueCollection:(id)arg1;
- (void)_insertPlacesForClueCollection:(id)arg1;
- (void)_insertSceneForClueCollection:(id)arg1;

@end
