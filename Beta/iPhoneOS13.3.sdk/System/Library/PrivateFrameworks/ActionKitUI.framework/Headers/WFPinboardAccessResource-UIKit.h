/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKit/WFPinboardAccessResource.h>

@class NSString;

@interface WFPinboardAccessResource (UIKit)

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pinboardLoginViewController:(id)arg1 loggedInWithApiToken:(id)arg2;
- (void)pinboardLoginViewController:(id)arg1 loggedInWithUsername:(id)arg2 password:(id)arg3;
- (void)pinboardLoginViewControllerDidCancel:(id)arg1;

@end
