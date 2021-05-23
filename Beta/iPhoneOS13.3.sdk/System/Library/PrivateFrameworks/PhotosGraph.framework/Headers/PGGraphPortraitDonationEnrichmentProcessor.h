/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSString;

@interface PGGraphPortraitDonationEnrichmentProcessor : NSObject

{
    NSCountedSet *_meaningNodes;
    NSCountedSet *_poiNodes;
    NSCountedSet *_roiNodes;
    NSCountedSet *_businessNodes;
    NSCountedSet *_publicEventNodes;
    NSCountedSet *_performerNodes;
    NSMutableDictionary *_datesByAddressNode;
    NSCountedSet *_addressNodes;
}

@property (nonatomic, readonly) NSCountedSet *meaningNodes;
@property (nonatomic, readonly) NSCountedSet *poiNodes;
@property (nonatomic, readonly) NSCountedSet *roiNodes;
@property (nonatomic, readonly) NSCountedSet *businessNodes;
@property (nonatomic, readonly) NSCountedSet *publicEventNodes;
@property (nonatomic, readonly) NSCountedSet *performerNodes;
@property (nonatomic, readonly) NSMutableDictionary *datesByAddressNode;
@property (nonatomic, readonly) NSCountedSet *addressNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)backgroundJobName;
+ (double)backgroundJobTimeout;
+ (_Bool)supportsBackgroundJob;
+ (id)graphDonationBundleId;

- (void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (_Bool)_shouldProcessGraphUpdate:(id)arg1;
- (void)_donateKnowledgeWithManager:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)_prepareForKnowledgeDonation;
- (void)_accumulateKnowledgeNodesFromMomentNodes:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)_knowledgeToDonateFromAccumulatedNodesWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)_donateKnowledge:(id)arg1 donationDate:(id)arg2 loggingConnection:(id)arg3;
- (id)_topicsFromTopicNodes:(id)arg1 currentProgress:(double *)arg2 progressFraction:(double)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)_locationNamedEntitiesFromAddressNodes:(id)arg1 dates:(id)arg2 currentProgress:(double *)arg3 progressFraction:(double)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (id)_namedEntitiesFromNamedEntityNodes:(id)arg1 currentProgress:(double *)arg2 progressFraction:(double)arg3 progressBlock:(CDUnknownBlockType)arg4;

@end
