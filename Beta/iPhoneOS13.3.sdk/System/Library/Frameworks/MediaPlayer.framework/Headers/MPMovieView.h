/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@protocol MPMovieViewDelegate;

@interface MPMovieView : UIView

{
    id <MPMovieViewDelegate> _delegate;
}

@property (weak, nonatomic) id <MPMovieViewDelegate> delegate;

- (void)didMoveToWindow;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
