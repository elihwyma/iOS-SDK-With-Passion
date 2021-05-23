/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <AVKit/AVPlayerViewController.h>

__attribute__((visibility("hidden")))
@interface LPAVPlayerViewController : AVPlayerViewController

{
    CDUnknownBlockType _readyForDisplayCallback;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithPlayerLayerView:(id)arg1;
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
