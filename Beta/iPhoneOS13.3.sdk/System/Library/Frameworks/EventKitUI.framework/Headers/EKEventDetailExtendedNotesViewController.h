/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UITextView;

@protocol EKEditItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDetailExtendedNotesViewController : UIViewController

{
    UITextView *_textView;
    NSString *_notes;
}

@property (copy, nonatomic) NSString *notes;
@property (weak, nonatomic) id <EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) _Bool presentModally;
@property (nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) _Bool useCustomBackButton;

- (id)init;
- (void)loadView;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewSafeAreaInsetsDidChange;
- (void)_updateConstraints;
- (void)loadTextView;
- (void)updateTextView;

@end
