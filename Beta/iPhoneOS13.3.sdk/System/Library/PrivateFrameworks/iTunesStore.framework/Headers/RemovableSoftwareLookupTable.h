/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSLock;

@interface RemovableSoftwareLookupTable : NSObject

{
    NSDictionary *_bundleDictionary;
    NSLock *_lock;
}

@property (copy, readonly) NSDictionary *bundleDictionary;

+ (_Bool)isRestrictedAppBundleIdentifier:(id)arg1;
+ (id)_urlForBundleIdentifier:(id)arg1;
+ (id)_fallbackItemIdentifier:(id)arg1;
+ (id)urlForBundleIdentifier:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_invalidateLookupCache:(id)arg1;
- (void)_populateBundleDictionary;
- (id)_identifierForBundleIdentifier:(id)arg1;
- (id)itemIdentifierForBundleIdentifer:(id)arg1;

@end
