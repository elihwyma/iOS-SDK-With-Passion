/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class ISWrappedAVPlayer;

__attribute__((visibility("hidden")))
@interface _PUVideoView : UIView

{
    ISWrappedAVPlayer *_player;
}

+ (Class)layerClass;

- (id)player;
- (void)setPlayer:(id)arg1;

@end
