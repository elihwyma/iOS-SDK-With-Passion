/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, PGGraph, PGSearchComputationCache;

@interface PGSearchKeywordComputer : NSObject

{
    PGGraph *_graph;
    PGSearchComputationCache *_searchComputationCache;
    NSDictionary *_personLocalIdentifiersBySocialGroupUUID;
}

@property (nonatomic, readonly) NSDictionary *personLocalIdentifiersBySocialGroupUUID;
@property (nonatomic, readonly) PGSearchComputationCache *searchComputationCache;

- (id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2;
- (id)searchableAssetUUIDsBySocialGroupWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(_Bool)arg3;
- (id)initWithGraph:(id)arg1 searchComputationCache:(id)arg2;
- (id)searchKeywordsByEventWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2;
- (id)eventNodeForUUID:(id)arg1 ofType:(unsigned long long)arg2;
- (void)_enumerateBusinessAndPublicEventKeywordsForEvent:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_personUUIDsInSocialGroupNode:(id)arg1;

@end
