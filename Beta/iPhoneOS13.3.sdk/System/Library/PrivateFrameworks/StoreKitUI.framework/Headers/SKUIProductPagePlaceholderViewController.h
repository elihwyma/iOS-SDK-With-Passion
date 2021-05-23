/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, SKUIClientContext, SKUIColorScheme, SKUIProductPageHeaderViewController, SKUIProductPagePlaceholderScrollView, UIActivityIndicatorView, UIScrollView;

@protocol SKUIProductPageChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIProductPagePlaceholderViewController : UIViewController <Swift>

{
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIProductPagePlaceholderScrollView *_scrollView;
    id <SKUIProductPageChildViewControllerDelegate> _delegate;
    long long _style;
    UIActivityIndicatorView *_indicator;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property (weak, nonatomic) id <SKUIProductPageChildViewControllerDelegate> delegate;

- (void)loadView;
- (id)initWithStyle:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_addHeaderView;

@end
