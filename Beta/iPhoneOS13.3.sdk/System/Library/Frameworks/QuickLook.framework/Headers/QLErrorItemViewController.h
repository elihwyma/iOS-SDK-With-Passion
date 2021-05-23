/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSError, QLItem;

__attribute__((visibility("hidden")))
@interface QLErrorItemViewController

{
    NSError *_error;
    QLItem *_previewItem;
}

@property (retain) QLItem *previewItem;
@property (retain, nonatomic) NSError *error;

- (void)loadView;
- (_Bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canPinchToDismiss;
- (_Bool)canEnterFullScreen;
- (id)errorView;
- (void)_updateLabelsWithCurrentErrorIfNeeded;

@end
