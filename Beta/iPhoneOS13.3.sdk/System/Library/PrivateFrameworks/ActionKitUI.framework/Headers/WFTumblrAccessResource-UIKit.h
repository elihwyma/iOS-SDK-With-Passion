/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKit/WFTumblrAccessResource.h>

@class NSString;

@interface WFTumblrAccessResource (UIKit)

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tumblrViewController:(id)arg1 didSucceedWithOAuthToken:(id)arg2 OAuthTokenSecret:(id)arg3;
- (void)tumblrViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)tumblrViewControllerDidCancel:(id)arg1;

@end
