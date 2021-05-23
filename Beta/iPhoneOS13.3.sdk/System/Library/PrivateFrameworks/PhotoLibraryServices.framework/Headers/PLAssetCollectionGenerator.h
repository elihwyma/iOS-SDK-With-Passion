/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSMutableArray, NSMutableSet, NSString, PLFrequentLocationManager, PLLocalCreationDateCreator;

@protocol PLMomentGenerationDataManagement;

@interface PLAssetCollectionGenerator : NSObject

{
    id <PLMomentGenerationDataManagement> _manager;
    PLFrequentLocationManager *_frequentLocationManager;
    PLLocalCreationDateCreator *_localCreationDateCreator;
    NSMutableSet *_usedMomentObjectIDs;
    NSMutableSet *_insertedOrUpdatedMoments;
    NSMutableArray *_momentsFromAssetClusters;
    NSDateFormatter *_debugDateFormatter;
}

@property (weak, nonatomic) id <PLMomentGenerationDataManagement> manager;
@property (retain, nonatomic) PLFrequentLocationManager *frequentLocationManager;
@property (retain, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator;
@property (retain, nonatomic) NSMutableSet *usedMomentObjectIDs;
@property (retain, nonatomic) NSMutableSet *insertedOrUpdatedMoments;
@property (retain, nonatomic) NSMutableArray *momentsFromAssetClusters;
@property (retain, nonatomic) NSDateFormatter *debugDateFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)logRoutineInformation;
- (id)initWithDataManager:(id)arg1 frequentLocationManager:(id)arg2 localCreationDateCreator:(id)arg3;
- (id)libraryClusterer:(id)arg1 createMomentClustersForAssetClusters:(id)arg2 existingMomentDataForAssets:(id)arg3;
- (id)libraryClusterer:(id)arg1 createMonthListForMoments:(id)arg2 month:(long long)arg3 year:(long long)arg4;
- (id)libraryClusterer:(id)arg1 createYearListForMoments:(id)arg2 year:(long long)arg3;
- (id)processMomentsWithAssets:(id)arg1 affectedMoments:(id)arg2 processMonthsAndYears:(_Bool)arg3;
- (id)_processMomentsCollectionsYearsWithAssets:(id)arg1 affectedMoments:(id)arg2 processMonthsAndYears:(_Bool)arg3;
- (id)_createMomentOrUpdateForAssetCluster:(id)arg1 existingMomentDataForAssets:(id)arg2;
- (id)_createYearListOrAppendMomentsForYear:(long long)arg1 moments:(id)arg2;
- (id)_createMonthListOrAppendMomentsForMonth:(long long)arg1 year:(long long)arg2 moments:(id)arg3;
- (void)_cleanUpMoment:(id)arg1;
- (void)_refreshMonthList:(id)arg1;
- (void)_refreshYearListWithMoments:(id)arg1;

@end
