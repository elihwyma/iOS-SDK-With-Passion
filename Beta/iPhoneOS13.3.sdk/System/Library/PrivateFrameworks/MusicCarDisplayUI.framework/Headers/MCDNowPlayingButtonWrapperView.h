/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIView.h>

@class MCDNowPlayingButton;

@interface MCDNowPlayingButtonWrapperView : UIView

{
    MCDNowPlayingButton *_nowPlayingButton;
}

@property (nonatomic, readonly) MCDNowPlayingButton *nowPlayingButton;

- (id)initWithFrame:(struct CGRect)arg1;

@end
