/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIViewController.h>

@class NSDictionary, NSString, QLAppearance, UIView;

@protocol QLCustomItemViewControllerHost;

@interface QLCustomItemViewController : UIViewController

{
    QLAppearance *_lastAppearance;
    _Bool _isShareEnabled;
    NSDictionary *_previewOptions;
    UIView *_shareSheetPresentationView;
    id <QLCustomItemViewControllerHost> _hostViewControllerProxy;
}

@property (weak, nonatomic) UIView *shareSheetPresentationView;
@property (retain) id <QLCustomItemViewControllerHost> hostViewControllerProxy;
@property (copy, nonatomic) NSDictionary *previewOptions;
@property (nonatomic) _Bool isShareEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setFullScreen:(_Bool)arg1;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)getFrameWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)presentActivityViewControllerFromView:(id)arg1 withURL:(id)arg2;
- (void)didDismissActivityViewController;
- (void)presentationModeDidChange:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)dismissPreviewController;
- (void)presentActivityViewControllerFromView:(id)arg1;
- (void)forwardMessageToHost:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
