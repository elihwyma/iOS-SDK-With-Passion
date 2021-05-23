/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSError, NSString, SKUIClientContext, SKUIProductPageHeaderViewController, UIScrollView;

@protocol SKUINetworkErrorDelegate;

@interface SKUINetworkErrorViewController : UIViewController

{
    SKUIClientContext *_clientContext;
    id <SKUINetworkErrorDelegate> _delegate;
    NSError *_error;
}

@property (nonatomic, readonly) NSError *error;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;

+ (_Bool)canDisplayError:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithError:(id)arg1;
- (void)loadView;
- (void)_networkTypeChanged:(id)arg1;

@end
