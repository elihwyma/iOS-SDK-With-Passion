/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSCalendar, PLFrequentLocationManager, PLLocalCreationDateCreator;

@protocol PLLibraryClustererDelegate;

@interface PLLibraryClusterer : NSObject

{
    id <PLLibraryClustererDelegate> _delegate;
    NSCalendar *_calendar;
    PLLocalCreationDateCreator *_localCreationDateCreator;
    PLFrequentLocationManager *_frequentLocationManager;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) PLLocalCreationDateCreator *localCreationDateCreator;
@property (nonatomic, readonly) PLFrequentLocationManager *frequentLocationManager;
@property (weak, nonatomic) id <PLLibraryClustererDelegate> delegate;

- (id)initWithLocalCreationDateCreator:(id)arg1 frequentLocationManager:(id)arg2;
- (void)processMomentsWithAssets:(id)arg1;
- (void)_createMomentsForDailyAssets:(id)arg1 currentMomentExistingMomentData:(id)arg2;
- (void)processMonthsAndYearsForMomentClusters:(id)arg1;
- (id)locationBasedMomentClustersForMomentsSortedByDate:(id)arg1;
- (void)_mergeMomentsIntoClustersBasedOnTimeWithMoments:(id)arg1 clusters:(id)arg2;
- (_Bool)_shouldSplitMomentsWithTimeDistance:(double)arg1 locationDistance:(double)arg2;
- (id)_momentsSplitWithinDayWithMoments:(id)arg1;
- (id)_momentsSeparatedOnLocationTypeWithMoments:(id)arg1;
- (id)_startDateComponentsForMomentCluster:(id)arg1;
- (id)_momentsGroupedByDayWithMomentsSortedByDate:(id)arg1;
- (id)_momentsWithLocationClusteredByPossibleSource:(id)arg1;
- (id)momentClustersForMomentsSortedByDate:(id)arg1;

@end
