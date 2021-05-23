/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSSet;

@protocol PGGraphUpdateInventory <Swift>

@property (nonatomic, readonly) long long updateType;
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

- (unsigned short)momentsToProcessForMomentUpdateTypes:includeMomentsToIngest: /* Error: Ran out of types for this method. */;
- (unsigned short)highlightsToProcessForKind:withHighlightUpdateTypes:includeHighlightsToIngest: /* Error: Ran out of types for this method. */;

@end
