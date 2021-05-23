/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class REConcurrentDictionary;

@interface REBundleCache : NSObject

{
    REConcurrentDictionary *_cachedBundles;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)bundleAtPath:(id)arg1;

@end
