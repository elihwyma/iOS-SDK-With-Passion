/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@interface ICStoreDialogResponseHandler : NSObject <Swift>

{
    _Bool _allowsHandlingNonAuthenticationDialogs;
    _Bool _shouldRecordLastAuthenticationDialogResponseTime;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)_handleBuyButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_handleGotoButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_handleDefaultStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_handleAuthenticationStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)handleButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
