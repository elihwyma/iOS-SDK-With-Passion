/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPSectionedIdentifierList.h>

@class MPRandomDistribution, NSMutableArray;

@protocol _MPSSILDelegate;

@interface _MPSSILImplementation : MPSectionedIdentifierList

{
    MPRandomDistribution *_randomDistribution;
    NSMutableArray *_candidateItems;
}

@property (weak, nonatomic) id <_MPSSILDelegate> delegate;
@property (nonatomic, readonly) MPRandomDistribution *randomDistribution;
@property (retain, nonatomic) NSMutableArray *candidateItems;

+ (_Bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (long long)itemCount;
- (void)encodeWithCoder:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (void)safelyReshuffleAfterItem:(id)arg1 inSection:(id)arg2;
- (id)enumeratorWithOptions:(unsigned long long)arg1 startingAtItem:(id)arg2 inSection:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2;
- (void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;
- (void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2;
- (void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2;
- (void)dataSourceReloadItem:(id)arg1 inSection:(id)arg2;
- (void)_dequeueCandidatesWithQuota:(long long)arg1 withExclusiveAccessToken:(id)arg2;
- (void)dequeueCandidatesWithQuota:(long long)arg1;
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3;
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3 afterTailOfSection:(id)arg4;
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3 afterItem:(id)arg4 inSection:(id)arg5;
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3;
- (id)initWithSectionedIdentifierList:(id)arg1 randomSource:(id)arg2 startingItemEntry:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (void)_beforeInitWithCoder:(id)arg1;
- (void)_enumerator:(id)arg1 didEncounterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (_Bool)_isSequentialSection:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (void)_reverseEnumeratorWillStartAtEnd:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (void)_addShuffleSection:(id)arg1 dataSource:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (void)_appendShuffledItems:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (id)_createShuffleCloneForItem:(id)arg1 inSection:(id)arg2 withExclusiveAccessToken:(id)arg3;

@end
