/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet;

@interface VUIMediaItemEntityTypesFetchResponse : NSObject

{
    _Bool _localMediaItemsAvailable;
    NSOrderedSet *_mediaItemEntityTypes;
}

@property (copy, nonatomic) NSOrderedSet *mediaItemEntityTypes;
@property (nonatomic, getter=areLocalMediaItemsAvailable) _Bool localMediaItemsAvailable;

- (id)init;
- (id)description;
- (_Bool)_updateWithResponse:(id)arg1 changes:(id)arg2 replaceContentsOnNilChanges:(_Bool)arg3;

@end
