/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, NSString, SKUIClientContext, SKUIRedeemIdManager, UIBarButtonItem, UITableView;

@protocol SKUIRedeemIdDelegate;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdViewController : UIViewController

{
    id <SKUIRedeemIdDelegate> _delegate;
    SKUIRedeemIdManager *_manager;
    SKUIClientContext *_clientContext;
    UITableView *_tableView;
    UIBarButtonItem *_nextButton;
    NSMutableDictionary *_fields;
}

@property (retain, nonatomic) SKUIRedeemIdManager *manager;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIBarButtonItem *nextButton;
@property (retain, nonatomic) NSMutableDictionary *fields;
@property (weak, nonatomic) id <SKUIRedeemIdDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_initializeManager;
- (void)_initializeTableView;
- (void)_initializeNavigationItem;
- (void)_subscribeToKeyboardEvents;
- (void)_reloadFooter;
- (void)_updateFieldAtIndexPath:(id)arg1 withText:(id)arg2;
- (void)_refreshNavigationItem;
- (id)_fieldForIndexPath:(id)arg1;
- (_Bool)_validateForm;
- (id)initWithClientContext:(id)arg1;
- (void)_cancelPressed;
- (void)_nextPressed;
- (id)_finalOutputFields;
- (void)_adjustInsetsForKeyboardFrameValue:(id)arg1;
- (void)redeemIdManager:(id)arg1 movedToRowAtIndexPath:(id)arg2;
- (void)redeemIdManager:(id)arg1 didChangeToText:(id)arg2 forCellAtIndexPath:(id)arg3;
- (void)redeemIdManager:(id)arg1 didReturnText:(id)arg2 forCellAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)_edgeInsetsFromInsets:(struct UIEdgeInsets)arg1 usingNewTopInset:(double)arg2;

@end
