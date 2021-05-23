/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, PGGraph, PGGraphUpdateRelatedDetails, PGManager;

@interface PGGraphUpdate : NSObject

{
    NSMutableDictionary *_registeredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;
    NSMutableDictionary *_registeredResolvableItemsByBusinessItemMuid;
    _Bool _isResumingFullAnalysis;
    _Bool _hasDeletedMomentNodes;
    _Bool _hasDeletedHighlightNodes;
    _Bool _hasUpdatedPersonNodes;
    _Bool _hasDeletedPersonNodes;
    long long _updateType;
    PGManager *_manager;
    NSMutableArray *_inputChanges;
    NSSet *_consolidatedChanges;
    NSMutableDictionary *_updateMomentNodesByUpdateType;
    NSMutableDictionary *_updateHighlightNodesByUpdateType;
    NSMutableDictionary *_mutableRegisteredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;
    PGGraph *_graph;
    NSSet *_localIdentifiersOfMomentsToInsert;
    NSSet *_localIdentifiersOfMomentsToDelete;
    NSSet *_localIdentifiersOfMomentsToUpdate;
    NSMutableDictionary *_momentByMomentLocalIdentifier;
    NSMutableSet *_deletedMomentLocalIdentfiersForValidityCheck;
    NSMutableSet *_deletedHighlightLocalIdentfiersForValidityCheck;
    NSSet *_momentsToIngest;
    NSSet *_insertedMomentNodes;
    unsigned long long _momentUpdateTypes;
    NSSet *_additionalLocationsToPrefetch;
    NSSet *_insertedAndUpdatedPersonNodes;
    NSMutableDictionary *_highlightByHighlightLocalIdentifier;
    NSMutableDictionary *_highlightsToInsertByHighlightKind;
    NSMutableSet *_localIdentifiersOfDeletedHighlights;
    NSSet *_localIdentifiersOfPersonsToInsert;
    NSSet *_localIdentifiersOfPersonsToDelete;
    NSSet *_localIdentifiersOfPersonsToUpdate;
    PGGraphUpdateRelatedDetails *_relatedDetails;
    NSSet *_localIdentifiersOfHighlightsToInsert;
    NSSet *_localIdentifiersOfHighlightsToDelete;
    NSSet *_localIdentifiersOfHighlightsToUpdate;
    NSSet *_insertedHighlightNodes;
    NSSet *_insertedHighlightDayGroupNodes;
}

@property (nonatomic, readonly) NSMutableArray *inputChanges;
@property (nonatomic, readonly) NSSet *consolidatedChanges;
@property (nonatomic, readonly) NSMutableDictionary *updateMomentNodesByUpdateType;
@property (nonatomic, readonly) NSMutableDictionary *updateHighlightNodesByUpdateType;
@property (nonatomic, readonly) NSMutableDictionary *mutableRegisteredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *highlightByHighlightLocalIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *highlightsToInsertByHighlightKind;
@property (nonatomic, readonly) NSMutableSet *localIdentifiersOfDeletedHighlights;
@property (nonatomic, readonly) NSMutableSet *deletedMomentLocalIdentfiersForValidityCheck;
@property (nonatomic, readonly) NSMutableSet *deletedHighlightLocalIdentfiersForValidityCheck;
@property (nonatomic, readonly) NSMutableDictionary *momentByMomentLocalIdentifier;
@property (nonatomic, readonly) PGManager *manager;
@property (retain, nonatomic) PGGraph *graph;
@property (nonatomic) long long updateType;
@property (nonatomic, readonly) NSSet *momentsToIngest;
@property (copy, nonatomic) NSSet *additionalLocationsToPrefetch;
@property (nonatomic, readonly) NSDictionary *registeredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;
@property (nonatomic, readonly) NSDictionary *registeredResolvableItemsByBusinessItemMuid;
@property (nonatomic, readonly) NSSet *insertedAndUpdatedPersonNodes;
@property (copy, nonatomic) NSSet *insertedMomentNodes;
@property (copy, nonatomic) NSSet *insertedHighlightNodes;
@property (nonatomic) _Bool hasDeletedMomentNodes;
@property (nonatomic) _Bool hasDeletedHighlightNodes;
@property (nonatomic) _Bool hasDeletedPersonNodes;
@property (nonatomic) _Bool hasUpdatedPersonNodes;
@property (nonatomic, readonly) PGGraphUpdateRelatedDetails *relatedDetails;
@property (nonatomic, readonly) NSSet *highlightDaysToIngest;
@property (nonatomic, readonly) NSSet *highlightDayGroupsToIngest;
@property (copy, nonatomic) NSSet *insertedHighlightDayGroupNodes;
@property (nonatomic, readonly) _Bool hasAnythingToDo;
@property (nonatomic, readonly) _Bool isSignificant;
@property (nonatomic, readonly) _Bool hasInsertedMomentNodes;
@property (nonatomic, readonly) _Bool hasUpdatedMomentNodes;
@property (nonatomic, readonly) _Bool hasInsertedHighlightNodes;
@property (nonatomic, readonly) _Bool hasUpdatedHighlightNodes;
@property (nonatomic, readonly) unsigned long long momentUpdateTypes;
@property (nonatomic, readonly) _Bool didProcessNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool isResumingFullAnalysis;
@property (nonatomic, readonly) _Bool hasMomentsToInsert;
@property (nonatomic, readonly) _Bool hasMomentsToDelete;
@property (nonatomic, readonly) _Bool hasMomentsToUpdate;
@property (nonatomic, readonly) _Bool hasHighlightsToInsert;
@property (nonatomic, readonly) _Bool hasHighlightsToDelete;
@property (nonatomic, readonly) _Bool hasHighlightsToUpdate;
@property (nonatomic, readonly) _Bool hasHighlightDayGroupsToInsert;
@property (nonatomic, readonly) _Bool hasPersonsToInsert;
@property (nonatomic, readonly) _Bool hasPersonsToDelete;
@property (nonatomic, readonly) _Bool hasPersonsToUpdate;
@property (nonatomic, readonly) NSSet *localIdentifiersOfMomentsToInsert;
@property (nonatomic, readonly) NSSet *localIdentifiersOfMomentsToDelete;
@property (nonatomic, readonly) NSSet *localIdentifiersOfMomentsToUpdate;
@property (nonatomic, readonly) NSSet *localIdentifiersOfHighlightsToInsert;
@property (nonatomic, readonly) NSSet *localIdentifiersOfHighlightsToDelete;
@property (nonatomic, readonly) NSSet *localIdentifiersOfHighlightsToUpdate;
@property (nonatomic, readonly) NSSet *localIdentifiersOfPersonsToInsert;
@property (nonatomic, readonly) NSSet *localIdentifiersOfPersonsToDelete;
@property (nonatomic, readonly) NSSet *localIdentifiersOfPersonsToUpdate;
@property (nonatomic, readonly) NSSet *identifiersForMomentRelatedToUpdatedPersons;
@property (nonatomic, readonly) NSSet *identifiersForMomentRelatedToDeletedPersons;

- (void)addChange:(id)arg1;
- (void)addChanges:(id)arg1;
- (id)initWithManager:(id)arg1;
- (id)momentsToProcessForMomentUpdateTypes:(unsigned long long)arg1 includeMomentsToIngest:(_Bool)arg2;
- (id)highlightsToProcessForKind:(unsigned short)arg1 withHighlightUpdateTypes:(unsigned long long)arg2 includeHighlightsToIngest:(_Bool)arg3;
- (id)initWithManager:(id)arg1 updateType:(long long)arg2;
- (id)initWithManager:(id)arg1 updateType:(long long)arg2 graph:(id)arg3;
- (id)cachedDataModelObjectForGraphChange:(id)arg1;
- (void)prepareForPostProcessing;
- (void)_registerMoments:(id)arg1;
- (void)_unregisterMomentsForMomentLocalIdentifiers:(id)arg1;
- (void)_consolidate;
- (id)_fetchMomentsWithMomentLocalIdentifiers:(id)arg1;
- (void)_consolidateIfNeeded;
- (void)enumerateConsolidatedChanges:(CDUnknownBlockType)arg1;
- (void)updatedMomentNode:(id)arg1 forUpdateChangeType:(unsigned long long)arg2;
- (void)updatedHighlightNode:(id)arg1 forUpdateChangeType:(unsigned long long)arg2;
- (id)momentNodesToProcessForMomentUpdateTypes:(unsigned long long)arg1 includeInsertedNodes:(_Bool)arg2;
- (void)registerLocationOfInterestVisitToResolve:(id)arg1 forMomentLocalIdentifier:(id)arg2;
- (void)registerPublicEventNode:(id)arg1 withConsolidatedAddress:(id)arg2 toResolveBusinessItemMuid:(unsigned long long)arg3;
- (void)registerInsertedAndUpdatedPersonNodes:(id)arg1;
- (void)clearInsertedAndUpdatedPersonNodes;
- (void)_registerHighlights:(id)arg1;
- (void)_unregisterHighlightsForHighlightLocalIdentifiers:(id)arg1;
- (id)highlightForHighlightLocalIdentifier:(id)arg1;
- (id)_fetchedHighlightsWithHighlightLocalIdentifiers:(id)arg1;

@end
