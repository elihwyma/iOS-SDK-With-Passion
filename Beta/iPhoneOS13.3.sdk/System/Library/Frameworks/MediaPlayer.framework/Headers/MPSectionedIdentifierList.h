/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPSectionedIdentifierListEntry, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@protocol MPSectionedIdentifierListAnnotationDelegate, MPSectionedIdentifierListDelegate, OS_dispatch_queue;

@interface MPSectionedIdentifierList : NSObject <Swift>

{
    long long _itemCount;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_startEntries;
    MPSectionedIdentifierListEntry *_endEntry;
    NSMutableDictionary *_sectionHeadEntryMap;
    _Bool _automaticallyReversesNonDestructiveDataSourceEdits;
    NSString *_identifier;
    id <MPSectionedIdentifierListDelegate> _delegate;
    id <MPSectionedIdentifierListAnnotationDelegate> _annotationDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=_sectionDataSources) NSDictionary *sectionDataSources;
@property (weak, nonatomic) id <MPSectionedIdentifierListAnnotationDelegate> annotationDelegate;
@property (nonatomic, readonly) NSString *identifier;
@property (weak, nonatomic) id <MPSectionedIdentifierListDelegate> delegate;
@property (nonatomic, readonly) long long itemCount;
@property (nonatomic) _Bool automaticallyReversesNonDestructiveDataSourceEdits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (void)_performWithoutRequiringExclusivity:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1 withExclusiveAccessToken:(id)arg2;
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
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterHeadOfSection:(id)arg3;
- (void)moveItem:(id)arg1 fromSection:(id)arg2 afterTailOfSection:(id)arg3;
- (void)_beforeInitWithCoder:(id)arg1;
- (void)_enumerator:(id)arg1 didEncounterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (void)_reverseEnumeratorWillStartAtEnd:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (id)_debugDescriptionWithEnumerator:(id)arg1 lengths:(CDStruct_a734b2e2 *)arg2;
- (id)debugDescriptionStartingAtItem:(id)arg1 inSection:(id)arg2;
- (void)performWithExclusiveAccess:(CDUnknownBlockType)arg1;
- (id)performWithExclusiveAccessAndReturnObject:(CDUnknownBlockType)arg1;
- (_Bool)performWithExclusiveAccessAndReturnBOOL:(CDUnknownBlockType)arg1;
- (long long)performWithExclusiveAccessAndReturnInteger:(CDUnknownBlockType)arg1;
- (void)_stitchWithPreviousEntry:(id)arg1 list:(id)arg2 cloneIndex:(struct NSMutableDictionary *)arg3;
- (void)_stitchLastItemEntryToHeadEntry:(id)arg1 branchList:(id)arg2;
- (void)_stitchPreviousEntry:(id)arg1 toEntry:(id)arg2 cloneIndex:(struct NSMutableDictionary *)arg3;
- (id)_encodeEntry:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (void)addDataSource:(id)arg1 section:(id)arg2 afterHeadOfSection:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)hasItem:(id)arg1 inSection:(id)arg2;
- (_Bool)hasSection:(id)arg1;
- (_Bool)isDeletedItem:(id)arg1 inSection:(id)arg2;
- (void)dataSourceMoveItemToHead:(id)arg1 inSection:(id)arg2;
- (void)dataSourceMoveItem:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;
- (void)dataSourceMoveItemToTail:(id)arg1 inSection:(id)arg2;
- (void)dataSourceUpdateSection:(id)arg1;
- (void)_addBranchToEntry:(id)arg1 entries:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (id)_dataSourceInsertItems:(id)arg1 fromSection:(id)arg2 afterEntry:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (id)_dataSourceMoveItem:(id)arg1 inSection:(id)arg2 afterEntry:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (void)_insertDataSourceHead:(id)arg1 afterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (void)_insertDataSource:(id)arg1 forSection:(id)arg2 afterEntry:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (id)_itemEntry:(id)arg1 sectionIdentifier:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (void)_loadDataSource:(id)arg1 forSection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_startEntriesWithExclusiveAccessToken:(id)arg1;
- (id)_tailEntryForSectionIdentifier:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (id)_sectionHeadEntryMapWithExclusiveAccessToken:(id)arg1;
- (id)_endEntryWithExclusiveAccessToken:(id)arg1;
- (id)encodableNextEntriesWithExclusiveAccessToken:(id)arg1;

@end
