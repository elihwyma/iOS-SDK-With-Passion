/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

@class NSString;

@interface _MPCPlayerReorderItemsCommand : _MPCPlayerCommand

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)moveItem:(id)arg1 afterItem:(id)arg2;
- (id)limitedIndexPathForMovingIndexPath:(id)arg1 toProprosedIndexPath:(id)arg2;
- (_Bool)canMoveItem:(id)arg1;

@end
