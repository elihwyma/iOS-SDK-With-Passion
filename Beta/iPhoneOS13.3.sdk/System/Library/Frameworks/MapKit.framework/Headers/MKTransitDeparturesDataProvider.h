/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapItem, MKTransitItemIncidentsController, MKTransitMapItemUpdater, NSArray, NSDate, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@protocol GEOMapItemTransitInfo, MKTransitDeparturesDataProviderDelegate;

__attribute__((visibility("hidden")))
@interface MKTransitDeparturesDataProvider : NSObject

{
    NSSet *_disabledSections;
    NSMutableArray *_sections;
    NSMutableDictionary *_sectionControllers;
    MKTransitItemIncidentsController *_incidentsController;
    NSMutableSet *_hiddenSections;
    NSMutableSet *_pagedSectionIdentifiers;
    _Bool _wantsSystemSectionCollapsing;
    NSMutableDictionary *_cachedSequencesForSection;
    NSMapTable *_cachedDirectionsForSystem;
    NSMapTable *_cachedSystemHasInactiveLines;
    MKTransitMapItemUpdater *_mapItemUpdater;
    long long _lastFailureDiagnosis;
    _Bool _active;
    _Bool _supportSystemSectionCollapsing;
    _Bool _refreshing;
    NSDate *_departureCutoffDate;
    NSDate *_lastCutoffDateWithValidSchedule;
    id <MKTransitDeparturesDataProviderDelegate> _delegate;
    MKMapItem *_mapItem;
    NSDate *_lastInfoRefreshDate;
    NSString *_lastInfoRefreshErrorDescription;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic, readonly) id <GEOMapItemTransitInfo> transitInfo;
@property (weak, nonatomic) id <MKTransitDeparturesDataProviderDelegate> delegate;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=supportsSystemSectionCollapsing) _Bool supportSystemSectionCollapsing;
@property (nonatomic, readonly, getter=allowsSystemSectionCollapsing) _Bool allowsSystemSectionCollapsing;
@property (copy, nonatomic) NSSet *disabledSections;
@property (retain, nonatomic) NSDate *departureCutoffDate;
@property (retain, nonatomic) NSDate *lastCutoffDateWithValidSchedule;
@property (nonatomic, readonly, getter=isRefreshing) _Bool refreshing;
@property (nonatomic, readonly) NSDate *lastInfoRefreshDate;
@property (copy, nonatomic, readonly) NSString *lastInfoRefreshErrorDescription;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) NSArray *sectionControllers;
@property (nonatomic, readonly) _Bool isStuckWithExpiredInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reloadData;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)possibleActions;
- (id)incidentsForSystem:(id)arg1;
- (id)_blockedIncidentEntities;
- (void)refreshSections;
- (id)sectionControllerForSection:(long long)arg1;
- (void)showNextPageInSection:(long long)arg1;
- (id)systemForSection:(long long)arg1;
- (long long)sectionTypeAtIndex:(long long)arg1;
- (_Bool)isHidingDeparturesForSystem:(id)arg1;
- (id)inactiveLinesForSection:(long long)arg1;
- (id)departuresControllerForSection:(long long)arg1;
- (id)dominantIncidentForDepartureSequence:(id)arg1;
- (void)showDeparturesForSystem:(id)arg1 insertedIndices:(out id *)arg2;
- (void)hideDeparturesForSystem:(id)arg1 removedIndices:(out id *)arg2;
- (id)incidentsForIncidentsSection;
- (id)identifierForSection:(long long)arg1;
- (id)directionForSection:(long long)arg1;
- (long long)sectionForIdentifier:(id)arg1;
- (long long)departureSequenceFrequencyTypeForSection:(long long)arg1;
- (_Bool)_isSectionTypeEnabled:(long long)arg1;
- (_Bool)_hasIncidentsSection;
- (_Bool)_hasPlaceCardMessageSection;
- (long long)_numberOfDeparturesSectionsForSystem:(id)arg1;
- (_Bool)_systemHasInactiveLines:(id)arg1;
- (id)_identifierForSystem:(id)arg1;
- (_Bool)_hasConnectionsSection;
- (id)_controllerForSection:(long long)arg1;
- (id)_identifierForSection:(long long)arg1;
- (long long)_sectionForIdentifier:(id)arg1;
- (id)_indexSetForHidingShowingSystem:(id)arg1;
- (id)_systemForSection:(long long)arg1 directionIndex:(out long long *)arg2;
- (id)_directionsForSystem:(id)arg1 hasSequencesWithNoDirection:(out _Bool *)arg2;
- (id)_departureCutoffDateForSequence:(id)arg1;
- (id)_departureSequencesForSection:(long long)arg1;
- (id)_departureCutoffDateForLine:(id)arg1;
- (id)_inactiveLinesControllerForSection:(long long)arg1;
- (id)_inactiveLinesForSystem:(id)arg1;
- (void)_updateRefreshFailureErrorDescription;
- (void)transitItemReferenceDateUpdater:(id)arg1 didUpdateToReferenceDate:(id)arg2;
- (id)ticketForTransitMapItemUpdater:(id)arg1;
- (void)transitMapItemUpdater:(id)arg1 willUpdateMapItem:(id)arg2;
- (void)transitMapItemUpdater:(id)arg1 updatedMapItem:(id)arg2 error:(id)arg3;
- (long long)indexOfFirstSectionWithType:(long long)arg1;
- (_Bool)isLastSectionForSystem:(id)arg1;
- (_Bool)_systemHasIncidents:(id)arg1;
- (id)_identifierForSequence:(id)arg1;

@end
