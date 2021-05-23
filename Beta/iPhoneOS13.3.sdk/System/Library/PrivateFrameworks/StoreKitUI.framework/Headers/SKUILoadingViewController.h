/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSString, SKUIClientContext, SKUIColorScheme, SKUILoadingView, UIColor;

@interface SKUILoadingViewController : UIViewController

{
    SKUIClientContext *_clientContext;
    NSString *_loadingText;
    UIColor *_backgroundColor;
    SKUIColorScheme *_spinnerColorScheme;
    SKUILoadingView *_loadingView;
}

@property (retain, nonatomic) SKUILoadingView *loadingView;
@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (retain, nonatomic) NSString *loadingText;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) SKUIColorScheme *spinnerColorScheme;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithClientContext:(id)arg1;
- (void)_initializeLoadingView;

@end
