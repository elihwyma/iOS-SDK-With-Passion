/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class AVQueuePlayer, UIColor;

__attribute__((visibility("hidden")))
@interface QLLoopingMediaItemViewController

{
    AVQueuePlayer *_queuePlayer;
    _Bool _addedObservers;
    UIColor *_fullscreenBackgroundColor;
}

- (void)dealloc;
- (_Bool)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)play;
- (id)player;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)fullscreenBackgroundColor;
- (void)previewDidAppear:(_Bool)arg1;
- (void)startObservingItem;
- (void)stopObservingItem;
- (void)setupPlayerWithMediaAsset:(id)arg1;

@end
