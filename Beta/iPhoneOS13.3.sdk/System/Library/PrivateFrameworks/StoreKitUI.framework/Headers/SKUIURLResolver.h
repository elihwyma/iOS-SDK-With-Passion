/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString, SKUIClientContext, SKUIPassbookLoader;

@protocol SKUIURLResolverDelegate, UINavigationControllerDelegate;

@interface SKUIURLResolver : NSObject

{
    SKUIClientContext *_clientContext;
    id <SKUIURLResolverDelegate> _delegate;
    id <UINavigationControllerDelegate> _navigationControllerDelegate;
    NSOperationQueue *_operationQueue;
    SKUIPassbookLoader *_passbookLoader;
}

@property (weak, nonatomic) id <SKUIURLResolverDelegate> delegate;
@property (weak, nonatomic) id <UINavigationControllerDelegate> navigationControllerDelegate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)tabIdentifierForURL:(id)arg1;

- (void)dealloc;
- (void)_presentViewController:(id)arg1;
- (void)_sendDidFinishWithResult:(_Bool)arg1;
- (id)initWithClientContext:(id)arg1;
- (void)_showBagURLWithURL:(id)arg1;
- (void)_showAccountViewControllerWithURL:(id)arg1;
- (void)_addPassbookPassWithURL:(id)arg1;
- (void)_showDonationViewControllerWithURL:(id)arg1;
- (void)_showGiftViewControllerWithURL:(id)arg1;
- (void)_handleSafariScriptDataUpdate:(id)arg1;
- (void)_performLookupWithURL:(id)arg1;
- (void)_showRedeemViewControllerWithURL:(id)arg1;
- (void)_showSearchWithURL:(id)arg1;
- (void)_selectTabWithIdentifier:(id)arg1;
- (void)_resolveURLRequest:(id)arg1 withOriginURL:(id)arg2;
- (void)_showPlaceholderViewController;
- (void)_showViewControllerWithResponse:(id)arg1 fromOperation:(id)arg2;
- (id)_newHTMLViewControllerWithSection:(id)arg1;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (void)passbookLoaderDidFinish:(id)arg1;
- (void)resolveURL:(id)arg1;

@end
