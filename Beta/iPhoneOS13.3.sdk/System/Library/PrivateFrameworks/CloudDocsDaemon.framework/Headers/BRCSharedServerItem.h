/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCServerItem.h>

__attribute__((visibility("hidden")))
@interface BRCSharedServerItem : BRCServerItem

- (id)st;
- (_Bool)isSharedToMeTopLevelItem;
- (_Bool)isSharedToMeChildItem;
- (id)parentItemOnFS;
- (id)parentItemIDOnFS;
- (id)parentZoneOnFS;
- (id)asSharedItem;
- (id)aliasDerivedStructure;
- (_Bool)isSharedItem;
- (id)parentLocalItemOnFS;
- (id)fallbackParentAppLibraryOnFS;
- (id)fallbackParentItemIDOnFS;
- (id)fallbackParentServerItemOnFS;
- (id)fallbackParentItemOnFS;
- (id)parentItemIDOnFSInDB:(id)arg1;

@end
