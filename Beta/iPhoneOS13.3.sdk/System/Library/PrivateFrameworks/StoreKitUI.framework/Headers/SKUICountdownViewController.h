/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSString, SKUIClientContext, SKUICountdownComponent, SKUIResourceLoader;

__attribute__((visibility("hidden")))
@interface SKUICountdownViewController : UIViewController

{
    SKUIResourceLoader *_artworkLoader;
    SKUICountdownComponent *_countdownComponent;
    SKUIClientContext *_clientContext;
}

@property (nonatomic, readonly) SKUIResourceLoader *artworkLoader;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic, readonly) SKUICountdownComponent *countdownComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithCountdownComponent:(id)arg1 artworkLoader:(id)arg2;

@end
