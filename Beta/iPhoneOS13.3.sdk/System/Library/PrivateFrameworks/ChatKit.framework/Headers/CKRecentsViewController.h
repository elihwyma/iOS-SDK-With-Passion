/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBrowserViewController.h>

@class MSStickerBrowserView, NSMutableArray, NSMutableDictionary, NSString, UILabel;

@interface CKRecentsViewController : CKBrowserViewController

{
    _Bool _hasHandwritingRecents;
    _Bool _hasStickerRecents;
    _Bool _isLoadingRecents;
    _Bool _preparingForDisplay;
    NSMutableArray *_recentItems;
    MSStickerBrowserView *_browserView;
    UILabel *_noRecentsLabel;
    NSMutableDictionary *_stickerCache;
    CDUnknownBlockType _draggingCompletionHandler;
}

@property (nonatomic) _Bool hasHandwritingRecents;
@property (nonatomic) _Bool hasStickerRecents;
@property (retain, nonatomic) NSMutableArray *recentItems;
@property (retain, nonatomic) MSStickerBrowserView *browserView;
@property (retain, nonatomic) UILabel *noRecentsLabel;
@property (retain, nonatomic) NSMutableDictionary *stickerCache;
@property (nonatomic) _Bool isLoadingRecents;
@property (nonatomic, getter=isPreparingForDisplay) _Bool preparingForDisplay;
@property (copy, nonatomic) CDUnknownBlockType draggingCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)prepareForDisplay;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)forceTearDownRemoteView;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
- (_Bool)shouldShowChatChrome;
- (_Bool)mayBeKeptInViewHierarchy;
- (id)requestSnapshotDataForPersistance;
- (void)saveSnapshotForBrowserViewController;
- (_Bool)dragManager:(id)arg1 canScaleItem:(id)arg2;
- (_Bool)dragManager:(id)arg1 canRotateItem:(id)arg2;
- (_Bool)dragManager:(id)arg1 canPeelItem:(id)arg2;
- (void)dragManager:(id)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
- (void)dragManager:(id)arg1 didDragItem:(id)arg2 toDragTarget:(id)arg3;
- (_Bool)dragManager:(id)arg1 shouldCancelDraggingForItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
- (void)loadRecents;
- (void)resortAndReloadRecents;
- (void)_loadRecentHandwritingsAndStickersWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupNoRecentsLabel;
- (void)_postBrowserDidPrepareForDisplayNotificationIfNecessary;
- (void)recentsUpdated;
- (id)_stickerForMSSticker:(id)arg1;
- (long long)numberOfStickersInStickerBrowserView:(id)arg1;
- (id)stickerBrowserView:(id)arg1 stickerAtIndex:(long long)arg2;
- (void)insertSticker:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startDragSticker:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)stickerBrowserView:(id)arg1 shouldDrawBorderAroundSticker:(id)arg2;

@end
