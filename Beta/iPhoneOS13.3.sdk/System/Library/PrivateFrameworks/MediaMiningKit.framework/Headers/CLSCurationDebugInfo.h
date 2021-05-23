/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSCurationDebugCluster, NSMapTable, NSString;

@interface CLSCurationDebugInfo : NSObject

{
    CLSCurationDebugCluster *_rootCluster;
    NSMapTable *_debugItemByItem;
    NSMapTable *_debugClusterByCluster;
    NSString *_agent;
    NSString *_stage;
}

@property (copy, nonatomic) NSString *agent;
@property (copy, nonatomic) NSString *stage;

- (id)initWithItems:(id)arg1;
- (void)beginTentativeSection;
- (void)endTentativeSectionWithSuccess:(_Bool)arg1;
- (id)initWithDebugCluster:(id)arg1;
- (id)debugInfoForCluster:(id)arg1;
- (id)debugItemForItem:(id)arg1;
- (id)debugItemsForItems:(id)arg1;
- (id)debugClusterForCluster:(id)arg1;
- (void)setClusters:(id)arg1 withReason:(id)arg2;
- (void)addClusters:(id)arg1 withReason:(id)arg2;
- (void)setState:(unsigned long long)arg1 ofCluster:(id)arg2 withReason:(id)arg3;
- (void)setState:(unsigned long long)arg1 ofItem:(id)arg2 withReason:(id)arg3;
- (void)setState:(unsigned long long)arg1 ofItems:(id)arg2 withReason:(id)arg3;
- (void)forceState:(unsigned long long)arg1 ofItem:(id)arg2 withReason:(id)arg3;
- (void)setUnclusteredItemsState:(unsigned long long)arg1 withReason:(id)arg2;
- (void)chooseItem:(id)arg1 inCluster:(id)arg2 withReason:(id)arg3;
- (void)chooseItem:(id)arg1 inItems:(id)arg2 withReason:(id)arg3;
- (void)chooseItems:(id)arg1 inCluster:(id)arg2 withReason:(id)arg3;
- (void)chooseItems:(id)arg1 inItems:(id)arg2 withReason:(id)arg3;
- (void)requireItems:(id)arg1 inCluster:(id)arg2;
- (void)requireItems:(id)arg1 inItems:(id)arg2;
- (void)dedupItems:(id)arg1 toItem:(id)arg2 withDedupingType:(unsigned long long)arg3;
- (void)dedupItems:(id)arg1 toItems:(id)arg2 withDedupingType:(unsigned long long)arg3;
- (void)dedupItems:(id)arg1 toRequiredItems:(id)arg2 withDedupingType:(unsigned long long)arg3;
- (void)_dedupItems:(id)arg1 toItems:(id)arg2 chosenState:(unsigned long long)arg3 withDedupingType:(unsigned long long)arg4;
- (void)resetWithReason:(id)arg1;
- (id)dictionaryRepresentationWithAppendExtraItemInfoBlock:(CDUnknownBlockType)arg1;

@end
