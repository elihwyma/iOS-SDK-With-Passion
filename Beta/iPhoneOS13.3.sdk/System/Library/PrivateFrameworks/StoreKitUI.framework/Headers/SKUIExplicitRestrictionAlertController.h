/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class SKUIClientContext, UIViewController;

@interface SKUIExplicitRestrictionAlertController : NSObject

{
    SKUIClientContext *_clientContext;
    UIViewController *_presentingViewController;
}

- (id)initWithClientContext:(id)arg1;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithClientContext:(id)arg1 presentingViewController:(id)arg2;

@end
