/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIMediaLibraryUtilities : NSObject

+ (id)_sortIndexesForObjects:(id)arg1 titleForObjectBlock:(CDUnknownBlockType)arg2;
+ (id)groupingForMediaEntities:(id)arg1 groupingKeyPath:(id)arg2 groupingSortComparator:(CDUnknownBlockType)arg3 performDefaultSort:(_Bool)arg4 sortIndexPropertyKey:(id)arg5;
+ (id)sortIndexesForGrouping:(id)arg1;
+ (id)sortIndexesForMediaEntities:(id)arg1 sortIndexPropertyKey:(id)arg2;
+ (CDUnknownBlockType)mediaItemEntityTypesSortComparator;

@end
