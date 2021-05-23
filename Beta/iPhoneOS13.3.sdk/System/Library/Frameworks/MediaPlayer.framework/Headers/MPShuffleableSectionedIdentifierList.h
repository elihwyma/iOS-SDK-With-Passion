/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPSectionedIdentifierList.h>

@class NSString, _MPSSILImplementation;

@protocol MPShuffleableSectionedIdentifierListDelegate;

@interface MPShuffleableSectionedIdentifierList : MPSectionedIdentifierList

{
    _MPSSILImplementation *_shuffledList;
    long long _shuffleType;
    NSString *_shuffleStartingSectionIdentifier;
    NSString *_shuffleStartingItemIdentifier;
}

@property (copy, nonatomic) NSString *shuffleStartingSectionIdentifier;
@property (copy, nonatomic) NSString *shuffleStartingItemIdentifier;
@property (weak, nonatomic) id <MPShuffleableSectionedIdentifierListDelegate> delegate;
@property (nonatomic) long long shuffleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (void)didDequeueShuffledItemsInSSIL:(id)arg1;
- (void)encodeWithCoder:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (void)setShuffleType:(long long)arg1 startingItem:(id)arg2 inSection:(id)arg3;
- (void)setShuffleType:(long long)arg1 startingItem:(id)arg2 inSection:(id)arg3 randomSource:(id)arg4;
- (void)safelyReshuffleAfterItem:(id)arg1 inSection:(id)arg2;
- (id)enumeratorWithOptions:(unsigned long long)arg1;
- (id)enumeratorWithOptions:(unsigned long long)arg1 startingAtItem:(id)arg2 inSection:(id)arg3;
- (id)enumeratorWithOptions:(unsigned long long)arg1 startingAtTailOfSection:(id)arg2;
- (id)enumeratorWithOptions:(unsigned long long)arg1 withExclusiveAccessToken:(id)arg2;
- (id)enumeratorWithOptions:(unsigned long long)arg1 startingAtItem:(id)arg2 inSection:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (id)enumeratorWithOptions:(unsigned long long)arg1 startingAtTailOfSection:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterTailOfSection:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3 afterItem:(id)arg4 inSection:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3 afterTailOfSection:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)replaceDataSource:(id)arg1 forSection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveItemToStart:(id)arg1 fromSection:(id)arg2;
- (void)moveItemToEnd:(id)arg1 fromSection:(id)arg2;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4;
- (void)removeItem:(id)arg1 fromSection:(id)arg2;
- (long long)_itemCountWithExclusiveAccessToken:(id)arg1;
- (void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2;
- (void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;
- (void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2;
- (void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2;
- (void)dataSourceReloadItem:(id)arg1 inSection:(id)arg2;
- (id)_candidateItemsWithExclusiveAccessToken:(id)arg1;
- (void)_dequeueCandidatesWithQuota:(long long)arg1 withExclusiveAccessToken:(id)arg2;
- (id)_shuffledListWithExclusiveAccessToken:(id)arg1;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterHeadOfSection:(id)arg3;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterHeadOfSection:(id)arg3;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterTailOfSection:(id)arg3;

@end
