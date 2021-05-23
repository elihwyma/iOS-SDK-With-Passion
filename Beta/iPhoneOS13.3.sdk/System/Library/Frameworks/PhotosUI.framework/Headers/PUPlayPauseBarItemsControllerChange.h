/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUPlayPauseBarItemsControllerChange : NSObject

{
    _Bool _playPauseStateDidChange;
    _Bool _currentPlaybackTimeDidChange;
    _Bool _playbackDurationDidChange;
}

@property (nonatomic, readonly) _Bool hasChanges;
@property (nonatomic, setter=_setPlayPauseStateDidChange:) _Bool playPauseStateDidChange;
@property (nonatomic, setter=_setCurrentPlaybackTimeDidChange:) _Bool currentPlaybackTimeDidChange;
@property (nonatomic, setter=_setPlaybackDurationDidChange:) _Bool playbackDurationDidChange;

@end
