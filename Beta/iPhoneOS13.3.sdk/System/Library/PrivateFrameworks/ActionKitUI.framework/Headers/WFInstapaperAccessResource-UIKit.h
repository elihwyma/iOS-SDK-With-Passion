/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <ActionKit/WFInstapaperAccessResource.h>

@class NSString;

@interface WFInstapaperAccessResource (UIKit)

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)instapaperLoginViewController:(id)arg1 authenticatedWithUsername:(id)arg2 token:(id)arg3 tokenSecret:(id)arg4;
- (void)instapaperLoginViewControllerDidCancel:(id)arg1;

@end
