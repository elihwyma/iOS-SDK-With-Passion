/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUInstructionsTableViewController.h>

@class HFTriggerBuilder, HUForwardingTriggerActionBuilderDelegate, HUTriggerActionEditorContentViewController, NSString;

@protocol HUTriggerEditorDelegate;

@interface HUTriggerActionEditorViewController : HUInstructionsTableViewController

{
    HUForwardingTriggerActionBuilderDelegate *_forwardingTriggerActionBuilderDelegate;
}

@property (nonatomic, readonly) HUTriggerActionEditorContentViewController *actionEditorContentViewController;
@property (retain, nonatomic) HUForwardingTriggerActionBuilderDelegate *forwardingTriggerActionBuilderDelegate;
@property (nonatomic, readonly) HFTriggerBuilder *triggerBuilder;
@property (weak, nonatomic) id <HUTriggerEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createTriggerActionEditorViewControllerForHome:(id)arg1 withTriggerActionSetBuilder:(id)arg2 andTriggerActionBuilderEditorDelegate:(id)arg3;
+ (_Bool)adoptsDefaultGridLayoutMargins;

- (void)viewDidLoad;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 delegate:(id)arg3;
- (void)homeComposeViewController:(id)arg1 didFinishWithHomeWorkflow:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2;
- (void)_preloadShortcutHomeManager;
- (id)initWithTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (void)_showShortcutsEditorIfPossible;
- (void)_showShortcutsEditor;
- (void)_informUserShortcutsAreNotSupportedInThisHome;

@end
