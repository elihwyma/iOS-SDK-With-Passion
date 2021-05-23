/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIActivity.h>

@class NSString, UIViewController, UIWindow;

@interface UIPrintActivity : UIActivity

{
    _Bool _isContentManaged;
    NSString *_sourceApplicationBundleID;
    UIViewController *_wrapperViewController;
    UIWindow *_windowHoldingActivityViewController;
}

@property (retain) UIViewController *wrapperViewController;
@property (retain) UIWindow *windowHoldingActivityViewController;
@property (nonatomic) _Bool isContentManaged;
@property (copy, nonatomic) NSString *sourceApplicationBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (id)printInteractionControllerWindowForPresentation:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)activityDidFinish:(_Bool)arg1;
- (void)performActivity;
- (id)_embeddedActivityViewController;
- (id)printInteractionController;
- (void)cancelPrintOptions;

@end
