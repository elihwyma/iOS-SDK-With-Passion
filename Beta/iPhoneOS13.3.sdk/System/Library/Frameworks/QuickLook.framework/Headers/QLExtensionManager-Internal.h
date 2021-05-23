/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QLExtensionManager.h>

@interface QLExtensionManager (Internal)

+ (id)ql_applicationBundleIdentifierOfExtensionForItem:(id)arg1;
+ (id)ql_previewExtensionCustomLoadingTimeForItem:(id)arg1;
+ (id)extensionForItem:(id)arg1;
+ (_Bool)ql_isPreviewExtensionThatHaveCustomPresentationViewForItem:(id)arg1;

- (void)remoteViewControllerForContentType:(id)arg1 applicationBundleIdentifier:(id)arg2 extensionType:(unsigned long long)arg3 generatonType:(unsigned long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;

@end
