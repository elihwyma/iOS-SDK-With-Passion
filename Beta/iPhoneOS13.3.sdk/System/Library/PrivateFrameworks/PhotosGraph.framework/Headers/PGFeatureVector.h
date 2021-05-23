/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraph.h>

@interface PGFeatureVector : PGGraph

+ (id)_imprecisePostalAddressFromPlacemark:(id)arg1;
+ (id)_personForName:(id)arg1;
+ (id)featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3;
+ (id)featureVectorWithLocalDate:(id)arg1 impreciseLocation:(id)arg2 peopleNames:(id)arg3;
+ (id)_featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 useImpreciseLocation:(_Bool)arg4;
+ (id)featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleUUIDs:(id)arg3 inPhotoLibrary:(id)arg4;
+ (id)_featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleClues:(id)arg3 useImpreciseLocation:(_Bool)arg4;
+ (id)featureVectorWithCalendarEvent:(id)arg1;
+ (id)featureVectorWithCalendarEvent:(id)arg1 requiresLocation:(_Bool)arg2 requiresPeople:(_Bool)arg3;

@end
