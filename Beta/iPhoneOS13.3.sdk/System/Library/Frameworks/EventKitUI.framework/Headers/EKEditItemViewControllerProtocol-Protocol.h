/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@protocol EKEditItemViewControllerDelegate;

@protocol EKEditItemViewControllerProtocol

@property (weak, nonatomic) id <EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) _Bool presentModally;
@property (nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) _Bool useCustomBackButton;

@end
