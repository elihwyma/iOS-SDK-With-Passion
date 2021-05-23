/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOMapsSuggestionsCache : NSObject

+ (id)defaultCacheDir;
+ (id)defaultPathForProcessName:(id)arg1;
+ (id)defaultSuppressedEntriesPath;
+ (void)pruneOldCacheAtPath:(id)arg1;

@end
