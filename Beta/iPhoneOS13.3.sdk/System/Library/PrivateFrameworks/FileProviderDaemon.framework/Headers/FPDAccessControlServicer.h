/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDAccessControlStore, FPDExtensionManager;

__attribute__((visibility("hidden")))
@interface FPDAccessControlServicer : NSObject

{
    FPDExtensionManager *_extensionManager;
    FPDAccessControlStore *_accessStore;
}

@property (weak, nonatomic) FPDAccessControlStore *accessStore;
@property (weak, nonatomic) FPDExtensionManager *extensionManager;

- (void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(CDUnknownBlockType)arg1;
- (void)revokeAccessToAllItemsForBundle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchEnumeratorForItemsAccessibleByBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)revokeAccessToAllBundlesCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_lowerToUpperBundleIdentifiers;
- (id)initWithExtensionManager:(id)arg1 accessStore:(id)arg2;
- (void)accessibleItemsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
