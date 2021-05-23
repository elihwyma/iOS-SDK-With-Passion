/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@interface VUIApplicationRouter : NSObject

+ (void)dismissPresentedViewController;
+ (id)currentNavigationController;
+ (_Bool)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id *)arg4;
+ (_Bool)handleAccountSettingsEvent:(id)arg1 urlString:(id)arg2 amsBagKey:(id)arg3;
+ (id)topPresentedViewController;
+ (id)topMostVisibleViewController;
+ (id)eventDataSourceForEvent:(id)arg1 viewElement:(id)arg2;
+ (void)_performForType:(long long)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 eventDataSource:(id)arg4;
+ (_Bool)_handleDocumentDataSource:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_handleAccountSettingsPresentationWithViewController:(id)arg1;
+ (void)_amsBagURLForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)_dismissPresentedViewControllerWithCompletion:(CDUnknownBlockType)arg1;
+ (id)_viewControllerWithIdentifier:(id)arg1;
+ (void)dismissOrPopViewControllerWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)dismissOrPopLastViewControllerWithCompletion:(CDUnknownBlockType)arg1;

@end
