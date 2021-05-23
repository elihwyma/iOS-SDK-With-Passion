/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSCache, NSString;

@interface PVDocumentCacheManager : NSObject

{
    NSCache *_cache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (void)removeAllEffects;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (void)setTotalCostLimit:(unsigned long long)arg1;
- (void)setCountLimit:(unsigned long long)arg1;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)generateKeyFromFilePathString:(id)arg1;
- (void)cacheOZXDocument:(void *)arg1 forKey:(id)arg2 timeElapsed:(double)arg3 memoryInfo:(unsigned long long)arg4;
- (void *)newOZXDocumentForKey:(id)arg1;
- (void *)getOZXDocumentForKey:(id)arg1;

@end
