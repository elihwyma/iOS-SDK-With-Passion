/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCDirectoryItem.h>

__attribute__((visibility("hidden")))
@interface BRCZoneRootItem : BRCDirectoryItem

- (id)fileID;
- (id)parentItemID;
- (id)st;
- (_Bool)isFSRoot;
- (_Bool)isZoneRoot;
- (_Bool)saveToDB;
- (_Bool)isShareableItem;
- (id)initWithZoneRootItemID:(id)arg1 session:(id)arg2;
- (id)parentItemOnFS;
- (struct BRCDirectoryItem *)asFSRoot;

@end
