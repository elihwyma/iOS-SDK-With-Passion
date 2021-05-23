/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PGGraphIngestBusinessProcessor : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_spatialMapCategoriesByMeaningIdentifier;

- (_Bool)shouldRunWithGraphUpdate:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)_insertBusinessItemsForMomentNodesToResolvedBusinessItems:(id)arg1 graph:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)_insertBusinessItemsFromMomentNodes:(id)arg1 graph:(id)arg2 withLocationOfInterestVisitsToResolveByMomentLocalIdentifier:(id)arg3 requiredCriteriaByPOIIdentifier:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (_Bool)_momentNode:(id)arg1 hasValidConstraintsForLocationOfInterestVisit:(id)arg2 requiredCriteriaByPOIIdentifier:(id)arg3;
- (id)_businessItemContainersToEnrichForLowConfidenceDisambiguation:(id)arg1 requiredCriteriaByPOIIdentifier:(id)arg2;
- (id)_predominantVisitForMomentNode:(id)arg1 publicEventBusinessItemMuid:(unsigned long long)arg2;
- (id)requiredCriteriaByPOIIdentifierForGraph:(id)arg1;

@end
