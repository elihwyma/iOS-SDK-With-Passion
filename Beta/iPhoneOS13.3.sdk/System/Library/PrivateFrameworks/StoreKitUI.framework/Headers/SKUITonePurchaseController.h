/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class CNContactPickerViewController, NSString, SKUIClientContext, SKUIItem, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUITonePurchaseController : NSObject

{
    SKUIClientContext *_clientContext;
    CNContactPickerViewController *_contactPickerController;
    CDUnknownBlockType _completionBlock;
    SKUIItem *_item;
    UIViewController *_parentViewController;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithItem:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)showPurchaseFlowWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_finishWithTonePurchase:(id)arg1;
- (void)_showContactPicker;
- (void)_dismissContactPicker;
- (void)_finishContactPicker:(id)arg1 withContact:(id)arg2;

@end
