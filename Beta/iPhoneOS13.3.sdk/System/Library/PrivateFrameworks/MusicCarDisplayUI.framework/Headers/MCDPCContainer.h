/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <Foundation/NSObject.h>

@class MCDPCItem, MCDPCModel, NSIndexPath, NSMutableDictionary, NSString;

@protocol MCDPCContainerDelegate, OS_dispatch_queue;

@interface MCDPCContainer : NSObject

{
    NSString *_identifier;
    NSIndexPath *_indexPath;
    MCDPCItem *_rootItem;
    MCDPCModel *_model;
    _Bool _showPlaybackProgress;
    struct {
        unsigned int didInvalidateRootItem:1;
        unsigned int didInvalidateIndicies:1;
        unsigned int willChangeCount:1;
        unsigned int didChangeCount:1;
    } __supportedDelegateCalls;
    long long _cachedCount;
    id <MCDPCContainerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialAccessContainerQueue;
    NSMutableDictionary *_cachedIndiciesByIdentifier;
    NSMutableDictionary *_cachedItemsByIndicies;
}

@property (nonatomic) long long cachedCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialAccessContainerQueue;
@property (retain, nonatomic) NSMutableDictionary *cachedIndiciesByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cachedItemsByIndicies;
@property (weak, nonatomic, readonly) MCDPCItem *rootItem;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *appTitle;
@property (nonatomic, readonly) NSString *title;
@property (weak, nonatomic, readonly) MCDPCModel *model;
@property (nonatomic, readonly) _Bool showPlaybackProgress;
@property (nonatomic, readonly) long long showCurrentlyPlayingIndex;
@property (weak, nonatomic) id <MCDPCContainerDelegate> delegate;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)setCount:(long long)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchContentWithCompletion:(CDUnknownBlockType)arg1;
- (id)containerAtIndex:(long long)arg1;
- (id)cachedItemForIndex:(long long)arg1;
- (void)beginLoadingItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isValidForRefreshedParent:(id)arg1;
- (void)_contentItemsUpdated:(id)arg1;
- (id)_initWithModel:(id)arg1 rootItem:(id)arg2 indexPath:(id)arg3;
- (void)getNowPlayingIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_nowPlayingIdentifiersDidChange:(id)arg1;
- (id)cachedIndexByIdentifier:(id)arg1;
- (void)getChildrenInRange:(struct _NSRange)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCountOfChildrenWithCompletion:(CDUnknownBlockType)arg1;
- (void)getPlaybackProgressSupportForChildrenWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginLoadingItemWithCompletion:(CDUnknownBlockType)arg1;
- (id)containerForItem:(id)arg1;
- (void)setShowPlaybackProgress:(_Bool)arg1;
- (void)updateRootItemWithCompletion:(CDUnknownBlockType)arg1;
- (id)cachedItemForIdentifier:(id)arg1;

@end
