/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIViewController.h>

@class _UISheetPresentationController;

@interface UIViewController (SafariServicesExtras)

@property (nonatomic, readonly) UIViewController *_sf_viewControllerToPresentFrom;
@property (nonatomic, readonly) struct CGRect _sf_bottomUnsafeAreaFrame;
@property (nonatomic, readonly) struct CGRect _sf_bottomUnsafeAreaFrameForToolbar;
@property (nonatomic, readonly) _Bool _sf_isMFMailComposeViewController;
@property (nonatomic, readonly) _Bool _sf_isPKAddPassesViewController;
@property (nonatomic, readonly) _Bool safari_isPresentedByActivityViewController;
@property (nonatomic, readonly) _Bool safari_wantsTransparentApplicationBackground;
@property (nonatomic, readonly) _Bool safari_wantsDoneButtonInModalBookmarksPanel;
@property (nonatomic, readonly) _UISheetPresentationController *safari_sheetPresentationController;

- (void)_sf_presentViewControllerOnTopOfPresentedViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sf_animateAlongsideTransitionOrPerform:(CDUnknownBlockType)arg1;
- (_Bool)safari_isEventuallyPresentedByViewControllerClass:(Class)arg1;
- (_Bool)safari_isHorizontallyConstrained;
- (_Bool)safari_isHorizontallyConstrainedFallingBackToRootViewControllerIfNecessary;
- (void)safari_updateApplicationBackgroundStyle;

@end
