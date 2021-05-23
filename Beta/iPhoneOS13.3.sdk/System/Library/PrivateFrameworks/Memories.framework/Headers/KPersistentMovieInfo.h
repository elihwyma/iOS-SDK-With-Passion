/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface KPersistentMovieInfo : NSObject

+ (long long)cacheCount;
+ (void)ensureCacheDirectoryExists;
+ (void)noteApplicationDidReceiveMemoryWarning;
+ (void)nukeCaches;
+ (id)cachedCreationDateForURL:(id)arg1;
+ (void)addURL:(id)arg1 withDate:(id)arg2;
+ (id)infoCachePath;
+ (void)reallySaveDict:(id)arg1;
+ (void)createOrLoadPersistentDict;
+ (void)savePersistentDict;

@end
