/*
 Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

#import <Foundation/NSObject.h>

@class QLExtensionManagerCache;

@interface QLExtensionManager : NSObject

{
    QLExtensionManagerCache *_thumbnailExtensionCache;
    QLExtensionManagerCache *_previewExtensionCache;
    QLExtensionManagerCache *_previewHighMemoryExtensionCache;
    QLExtensionManagerCache *_thumbnailHighMemoryExtensionCache;
}

@property (retain, nonatomic) QLExtensionManagerCache *thumbnailExtensionCache;
@property (retain, nonatomic) QLExtensionManagerCache *previewExtensionCache;
@property (retain, nonatomic) QLExtensionManagerCache *previewHighMemoryExtensionCache;
@property (retain, nonatomic) QLExtensionManagerCache *thumbnailHighMemoryExtensionCache;

+ (id)sharedManager;
+ (void)_setSharedManager:(id)arg1;
+ (void)_resetSharedManager;
+ (_Bool)extension:(id)arg1 supportsExactType:(id)arg2;

- (id)extensionForContentType:(id)arg1 allowExtensionsForParentTypes:(_Bool)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6;
- (_Bool)existsExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(_Bool)arg2 applicationBundleIdentifier:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5;
- (id)qlExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(_Bool)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6;
- (void)_setupCache;
- (_Bool)existsExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(_Bool)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6;
- (void)_addQueryAttributesToExtensionQuery:(id)arg1 withContentType:(id)arg2 appBundleIdentifier:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5;
- (id)_cachesForExtensionType:(unsigned long long)arg1;
- (id)_applicationPathForBundleId:(id)arg1;
- (void)extensionContextForContentType:(id)arg1 allowExtensionsForParentTypes:(_Bool)arg2 appBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
- (id)_extensionPointNameForExtensionType:(unsigned long long)arg1;

@end
