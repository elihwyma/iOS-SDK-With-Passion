/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICURLResponseHandler.h>

@interface ICStoreURLResponseHandler : ICURLResponseHandler

+ (void)_updateDefaultStorefrontIdentifier:(id)arg1 usingIdentityStore:(id)arg2;

- (void)processInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)processCompletedResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_verifyMescalSignatureForResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_performAuthenticationForResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_processDialogResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
