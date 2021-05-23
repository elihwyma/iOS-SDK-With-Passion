/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@interface FPAccessControlManager : NSObject

- (void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(CDUnknownBlockType)arg1;
- (void)revokeAccessToAllItemsForBundle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)revokeAccessToAllBundlesCompletionHandler:(CDUnknownBlockType)arg1;
- (void)collectionForItemsAccessibleByBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)revokeAccessToAllBundles;

@end
