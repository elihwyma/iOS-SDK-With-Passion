/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIViewController.h>

@class NSArray, UINavigationController, _SFSettingsAlertContentController, _SFSettingsAlertItem;

@interface _SFSettingsAlertController : UIViewController

{
    UINavigationController *_navigationController;
}

@property (nonatomic, readonly) _SFSettingsAlertContentController *_rootContentController;
@property (nonatomic, readonly) NSArray *items;
@property (retain, nonatomic) _SFSettingsAlertItem *focusedItem;

- (void)addItem:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)_pushSubItemsForGroup:(id)arg1;
- (void)addDivider;

@end
