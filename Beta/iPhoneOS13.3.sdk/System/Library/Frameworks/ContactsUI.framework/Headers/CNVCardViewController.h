/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class CNContactNavigationController, NSArray, NSString;

@protocol CNVCardViewControllerDelegate;

@interface CNVCardViewController : UIViewController

{
    id <CNVCardViewControllerDelegate> _delegate;
    NSArray *_contacts;
}

@property (retain, nonatomic) NSArray *contacts;
@property (weak, nonatomic) id <CNVCardViewControllerDelegate> delegate;
@property (nonatomic, readonly) CNContactNavigationController *contactNavigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)contactNavigationControllerDidCancel:(id)arg1;
- (void)contactNavigationControllerDidComplete:(id)arg1;
- (id)contactNavigationController:(id)arg1 contactViewControllerForContact:(id)arg2 preferredMode:(long long)arg3;
- (id)initWithVCardData:(id)arg1;

@end
