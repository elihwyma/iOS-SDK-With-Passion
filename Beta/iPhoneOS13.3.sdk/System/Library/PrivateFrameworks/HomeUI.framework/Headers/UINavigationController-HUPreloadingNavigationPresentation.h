/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UINavigationController.h>

#import <HomeUI/Swift-Protocol.h>

@class NSString;

@interface UINavigationController (HUPreloadingNavigationPresentation) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)hu_preloadContent;
- (id)hu_pushPreloadableViewController:(id)arg1 animated:(_Bool)arg2;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;
- (id)hu_presentedItem;

@end
