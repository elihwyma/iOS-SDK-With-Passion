/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGDejunkerDeduper.h>

@class NSDictionary, NSSet;

@interface PGDejunkerDeduper_CLSInvestigationItem : PGDejunkerDeduper

{
    NSDictionary *_personLocalIdentifiersByItemIdentifier;
    NSDictionary *_peopleScenesByItemIdentifier;
    NSDictionary *_averageFaceQualityByItemIdentifier;
    NSSet *_verifiedPersonLocalIdentifiers;
}

@property (retain, nonatomic) NSSet *verifiedPersonLocalIdentifiers;

- (id)dejunkedDedupedItemIdentifiersWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id *)arg3;
- (id)bestItemInItems:(id)arg1 options:(id)arg2;
- (_Bool)isJunkForItem:(id)arg1;
- (id)debugPersonStringForItem:(id)arg1;
- (id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1;
- (id)featureWithItem:(id)arg1;
- (id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2;
- (id)dejunkedDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (void)_buildCachesWithItems:(id)arg1 options:(id)arg2;
- (id)bestItemsInItems:(id)arg1 options:(id)arg2;
- (_Bool)item:(id)arg1 isStrongRequiredWithOptions:(id)arg2;
- (_Bool)item:(id)arg1 isWeaklyRequiredWithOptions:(id)arg2;
- (id)requiredItemsInItems:(id)arg1 options:(id)arg2 containStronglyRequiredItems:(_Bool *)arg3;

@end
