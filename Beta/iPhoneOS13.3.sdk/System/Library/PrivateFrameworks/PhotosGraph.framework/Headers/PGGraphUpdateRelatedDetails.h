/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet;

@interface PGGraphUpdateRelatedDetails : NSObject

{
    NSMutableSet *_accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
    NSMutableSet *_accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;
}

@property (retain, nonatomic) NSMutableSet *accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons;
@property (retain, nonatomic) NSMutableSet *accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons;
@property (nonatomic, readonly) NSSet *identifiersForMomentRelatedToUpdatedPersons;
@property (nonatomic, readonly) NSSet *identifiersForMomentRelatedToDeletedPersons;

- (id)init;
- (id)_momentNodesFromPersonNodes:(id)arg1;
- (void)accumulateDetailsForUpdatedPersonNode:(id)arg1 personChange:(id)arg2;
- (void)accumulateDetailsForDeletedPersonNodes:(id)arg1;
- (void)_accumulateMomentIdentifiersInto:(id)arg1 forPersonNodes:(id)arg2;

@end
