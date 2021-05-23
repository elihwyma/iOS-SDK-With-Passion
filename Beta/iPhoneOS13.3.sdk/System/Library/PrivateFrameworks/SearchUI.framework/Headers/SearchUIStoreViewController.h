/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <StoreKit/SKStoreProductViewController.h>

@class NSString;

@protocol SFFeedbackListener;

@interface SearchUIStoreViewController : SKStoreProductViewController

{
    id <SFFeedbackListener> _feedbackListener;
}

@property (weak) id <SFFeedbackListener> feedbackListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)initWithIdentifier:(id)arg1 feedbackListener:(id)arg2;

@end
