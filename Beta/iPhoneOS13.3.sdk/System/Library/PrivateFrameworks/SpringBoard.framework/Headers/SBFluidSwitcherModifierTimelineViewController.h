/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class NSMutableArray, NSString, UIButton, UINavigationController, UIScrollView, _SBModifierTimelineDetailViewController;

@interface SBFluidSwitcherModifierTimelineViewController : UIViewController

{
    NSMutableArray *_entryViews;
    UIScrollView *_scrollView;
    UIButton *_clearButton;
    UINavigationController *_navigationController;
    _SBModifierTimelineDetailViewController *_detailViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addEntry:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_reset:(id)arg1;
- (void)didSelectEntryView:(id)arg1;

@end
