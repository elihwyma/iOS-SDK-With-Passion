/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVKit/AVPresentationContainerView.h>

@class AVPlayerViewControllerContentView;

__attribute__((visibility("hidden")))
@interface AVPlayerView : AVPresentationContainerView

{
    _Bool _needsInitialLayout;
    AVPlayerViewControllerContentView *_contentView;
}

@property (nonatomic) _Bool needsInitialLayout;
@property (nonatomic, readonly) AVPlayerViewControllerContentView *contentView;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 contentView:(id)arg2;
- (void)beginManagingContentView;

@end
