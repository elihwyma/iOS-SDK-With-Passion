/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (ISAdditions)

+ (_Bool)ensureDirectoryExists:(id)arg1;
+ (id)cacheDirectoryPathWithName:(id)arg1;
+ (_Bool)_storeMovePath:(id)arg1 toPath:(id)arg2;

@end
