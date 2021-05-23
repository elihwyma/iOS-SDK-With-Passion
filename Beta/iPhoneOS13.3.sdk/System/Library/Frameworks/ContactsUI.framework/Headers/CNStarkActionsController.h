/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContact, CNContactQuickActionsController, CNStarkActionView, NSArray, NSString, UITraitCollection;

@protocol UINavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNStarkActionsController : UIViewController <Swift>

{
    CNContact *_contact;
    CNContactQuickActionsController *_quickActionsController;
    UIViewController *_disambiguationViewController;
    id <UINavigationControllerDelegate> _phoneNavigationControllerDelegate;
    CNStarkActionView *_messageActionView;
    CNStarkActionView *_callActionView;
    CNStarkActionView *_directionsActionView;
    double _willTransitionToBoundsWidth;
    NSArray *_layoutConstraints;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) CNContactQuickActionsController *quickActionsController;
@property (weak, nonatomic) UIViewController *disambiguationViewController;
@property (weak, nonatomic) id <UINavigationControllerDelegate> phoneNavigationControllerDelegate;
@property (nonatomic, readonly) CNStarkActionView *messageActionView;
@property (nonatomic, readonly) CNStarkActionView *callActionView;
@property (nonatomic, readonly) CNStarkActionView *directionsActionView;
@property (nonatomic) double willTransitionToBoundsWidth;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

+ (id)descriptorForRequiredKeys;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)updateViewConstraints;
- (id)initWithContact:(id)arg1;
- (void)setupViews;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)actionViewTapped:(id)arg1;
- (void)updateViews;
- (id)viewForActionType:(id)arg1;
- (void)contactQuickActionsController:(id)arg1 presentDisambiguationViewController:(id)arg2 forActionType:(id)arg3;
- (void)contactQuickActionsController:(id)arg1 dismissDisambiguationViewController:(id)arg2 forActionType:(id)arg3;
- (void)addForwardingDelegate;
- (void)forwardDelegateForNavigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)removeForwardingDelegate;

@end
