/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKit/WFAccountAccessResource.h>

@class NSString;

@interface WFAccountAccessResource (UIKit)

@property (copy, nonatomic) CDUnknownBlockType viewControllerCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loginViewController:(id)arg1 didLoginWithAccount:(id)arg2;
- (void)loginViewControllerDidCancel:(id)arg1;

@end
