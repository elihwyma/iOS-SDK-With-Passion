/*
 Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import <SUStructuredPageGroupedViewController.h>

@class NSIndexPath, SUAudioPlayer, SUPlayerStatus, SUSegmentedControl;

@interface MSStructuredPageViewController : SUStructuredPageGroupedViewController

{
    SUSegmentedControl *_inlineSegmentedControl;
    NSIndexPath *_previewIndexPath;
    SUAudioPlayer *_previewPlayer;
    SUPlayerStatus *_previewStatus;
}

- (id)init;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)applicationDidEnterBackground;
- (void)setSkLoading:(_Bool)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (_Bool)canDisplaySectionGroup:(id)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (_Bool)canSelectRowAtIndexPath:(id)arg1;
- (_Bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (_Bool)purchaseItemAtIndexPath:(id)arg1;
- (void)_stopPreviewPlayback;
- (void)_setPreviewStatus:(id)arg1 forIndexPath:(id)arg2 animated:(_Bool)arg3;
- (_Bool)_handlePreviewForIndexPath:(id)arg1;
- (void)_playerStatusChangeNotification:(id)arg1;
- (_Bool)_handleMediaPreviewForIndexPath:(id)arg1;
- (_Bool)_handleInlinePreviewForIndexPath:(id)arg1;

@end
