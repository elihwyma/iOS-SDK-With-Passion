/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <Foundation/NSObject.h>

@class MCDPCItem, MCDPlayableContentPlaybackManager, MPWeakTimer, NSIndexPath, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface MCDPCModel : NSObject

{
    _Bool _currentPlayingApp;
    _Bool _didFinishInitialLoad;
    unsigned int _supportedAPIMask;
    NSString *_bundleID;
    MCDPCItem *_rootItem;
    MCDPlayableContentPlaybackManager *_playableContentPlaybackManager;
    CDUnknownBlockType _playbackCompletion;
    CDUnknownBlockType _containerCompletion;
    NSIndexPath *_selectedIndexPath;
    NSMutableDictionary *_items;
    NSMutableDictionary *_beginLoadingBlocks;
    MPWeakTimer *_beginLoadingTimeoutTimer;
    MPWeakTimer *_playbackProgressTimeoutTimer;
    NSObject<OS_dispatch_queue> *_mediaRemoteNotificationQueue;
    NSObject<OS_dispatch_queue> *_mediaRemoteItemQueue;
    struct CGSize _imageSize;
}

@property (retain, nonatomic) MCDPlayableContentPlaybackManager *playableContentPlaybackManager;
@property (nonatomic, getter=isCurrentPlayingApp) _Bool currentPlayingApp;
@property (copy, nonatomic) CDUnknownBlockType playbackCompletion;
@property (copy, nonatomic) CDUnknownBlockType containerCompletion;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSMutableDictionary *items;
@property (nonatomic) _Bool didFinishInitialLoad;
@property (nonatomic) unsigned int supportedAPIMask;
@property (retain, nonatomic) NSMutableDictionary *beginLoadingBlocks;
@property (retain, nonatomic) MPWeakTimer *beginLoadingTimeoutTimer;
@property (retain, nonatomic) MPWeakTimer *playbackProgressTimeoutTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteNotificationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteItemQueue;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) MCDPCItem *rootItem;
@property (nonatomic, readonly) NSString *appTitle;
@property (nonatomic) struct CGSize imageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_registerNotifications;
- (id)initWithBundleID:(id)arg1;
- (void)initiatePlaybackAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)containerForRoot;
- (void)contentManager:(id)arg1 itemDidChange:(id)arg2 response:(id)arg3;
- (void)_registerForClientContent;
- (void)_browsableContentDidRegisterNotification:(id)arg1;
- (void)_dataSourceInvalidated:(id)arg1;
- (void)_contentItemsUpdated:(id)arg1;
- (void)_nowPlayingDidChangeNotification:(id)arg1;
- (id)itemsFromMRContentItems:(id)arg1;
- (void)_finishBeginLoadingNotification:(id)arg1;
- (void)_setupBeginLoadingTimeoutTimerWithCompletion:(CDUnknownBlockType)arg1;
- (id)_errorForNotification:(id)arg1;
- (void)_invalidateBeginLoadingTimeoutTimer;
- (void)_invalidatePlaybackProgressTimeoutTimer;
- (void)_setupPlaybackProgressTimeoutTimerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_finishPlaybackNotification:(id)arg1;
- (void)beginLoadingItemAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getChildrenSupportsPlaybackProgressForIndexPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getNowPlayingIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)getCountOfChildrenAtIndexPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getChildrenAtIndexPath:(id)arg1 inRange:(struct _NSRange)arg2 completion:(CDUnknownBlockType)arg3;

@end
