/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface XBApplicationDataStore : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSCountedSet *_cacheableBundleIdentifiers;
    NSMutableDictionary *_cachedStoresByBundleIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void)beginAccessBlockForBundleIdentifier:(id)arg1;
- (id)_loadCompatibilityInfoForBundleIdentifier:(id)arg1;
- (void)_persistCompatibilityInfo:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)endAccessBlockForBundleIdentifier:(id)arg1;
- (void)_clearCompatibilityInfoForBundleIdentifier:(id)arg1;
- (id)_storeForBundleIdentifier:(id)arg1;
- (void)persistManifestData:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)clearManifestDataForBundleIdentifier:(id)arg1;
- (id)loadManifestDataForBundleIdentifier:(id)arg1;
- (void)synchronizeForBundleIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
