/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
 */

#import <UIKit/UIViewController.h>

@class APUIShortLookViewController, NSString;

@protocol AXSiriShortcutsViewControllerDelegate;

@interface AXSiriShortcutsViewController : UIViewController

{
    id <AXSiriShortcutsViewControllerDelegate> _delegate;
    APUIShortLookViewController *_shortLookViewController;
}

@property (retain, nonatomic) APUIShortLookViewController *shortLookViewController;
@property (weak, nonatomic) id <AXSiriShortcutsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)shortLookViewController:(id)arg1 didCompleteActionWithResult:(long long)arg2;
- (void)shortLookViewController:(id)arg1 didDismissLongLookWithReason:(long long)arg2 actionCompleted:(_Bool)arg3 shouldClearAction:(_Bool)arg4;
- (id)initWithShortcutIdentifier:(id)arg1 bundleID:(id)arg2;
- (void)_automaticallyPerformShortcutIfPossible;

@end
