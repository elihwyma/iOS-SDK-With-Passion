/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <OnBoardingKit/OBTableWelcomeController.h>

@class NSLayoutConstraint, UITableViewController;

__attribute__((visibility("hidden")))
@interface STTableWelcomeController : OBTableWelcomeController

{
    UITableViewController *_tableViewController;
    NSLayoutConstraint *_heightConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) UITableViewController *tableViewController;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setTableView:(id)arg1;
- (void)_contentSizeDidChangeFrom:(struct CGSize)arg1 to:(struct CGSize)arg2;

@end
