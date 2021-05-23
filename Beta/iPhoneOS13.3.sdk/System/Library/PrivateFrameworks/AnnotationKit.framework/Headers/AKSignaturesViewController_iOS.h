/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIViewController.h>

@class AKController, NSArray, NSString, UIColor, UINavigationBar, UIResponder, UITableView;

@protocol AKSignaturesViewControllerDelegate;

@interface AKSignaturesViewController_iOS : UIViewController

{
    _Bool _presentedInAlert;
    _Bool _showsNavigationBar;
    _Bool _allowsEdits;
    _Bool _showAddEditButtonRow;
    AKController *_controller;
    id <AKSignaturesViewControllerDelegate> _delegate;
    UIColor *_tableBackgroundColor;
    UITableView *_tableView;
    UINavigationBar *_navBar;
    NSArray *_rightBarItems;
    NSArray *_editingLeftBarItems;
    NSArray *_leftBarItems;
    UIResponder *_responderToRestore;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UINavigationBar *navBar;
@property (retain, nonatomic) NSArray *rightBarItems;
@property (retain, nonatomic) NSArray *editingLeftBarItems;
@property (retain, nonatomic) NSArray *leftBarItems;
@property (weak, nonatomic) UIResponder *responderToRestore;
@property (weak, nonatomic) AKController *controller;
@property (weak, nonatomic) id <AKSignaturesViewControllerDelegate> delegate;
@property (nonatomic, readonly) double idealHeight;
@property (nonatomic) _Bool presentedInAlert;
@property (nonatomic) _Bool showsNavigationBar;
@property (nonatomic) _Bool allowsEdits;
@property (nonatomic) _Bool showAddEditButtonRow;
@property (retain, nonatomic) UIColor *tableBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)becomeFirstResponder;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (long long)positionForBar:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_signatures;
- (id)initWithController:(id)arg1;
- (void)signatureCreationControllerDidCreateSignature:(id)arg1;
- (void)_configureUI;
- (void)_continueToCreateSignature:(id)arg1;
- (void)_cancelPicker:(id)arg1;
- (void)_deleteSignature:(id)arg1;

@end
