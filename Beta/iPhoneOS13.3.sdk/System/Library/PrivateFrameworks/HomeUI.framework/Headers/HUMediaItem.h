/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItem.h>

@class MPPlaybackArchiveDisplayProperties;

@interface HUMediaItem : HFItem

{
    MPPlaybackArchiveDisplayProperties *_playbackArchiveDisplayProperties;
}

@property (retain, nonatomic) MPPlaybackArchiveDisplayProperties *playbackArchiveDisplayProperties;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithPlaybackArchiveDisplayProperties:(id)arg1;

@end
