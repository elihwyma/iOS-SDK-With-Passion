/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <AVFoundation/AVPlayer.h>

@protocol PUAVPlayerDelegate;

__attribute__((visibility("hidden")))
@interface PUAVPlayer : AVPlayer

{
    struct {
        _Bool respondsToRateDidChange;
        _Bool respondsToStatusDidChange;
        _Bool respondsToDidDeallocate;
    } _delegateFlags;
    id <PUAVPlayerDelegate> _delegate;
}

@property (weak, nonatomic) id <PUAVPlayerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
