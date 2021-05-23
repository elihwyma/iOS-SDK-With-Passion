/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@class NSLock, NSMutableDictionary;

@interface REAppNameCache : RESingleton

{
    NSMutableDictionary *_nameCache;
    NSLock *_lock;
}

- (id)_init;
- (id)localizedNameForApplicationWithIdentifier:(id)arg1;

@end
