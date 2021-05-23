/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <UIKit/UIViewController.h>

@class UITextView;

@interface CKSettingsGenericAboutViewController : UIViewController

{
    UITextView *_aboutView;
}

@property (retain, nonatomic) UITextView *aboutView;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)done:(id)arg1;
- (id)initWithTitle:(id)arg1 bodyText:(id)arg2;

@end
