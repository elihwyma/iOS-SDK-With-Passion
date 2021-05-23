/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIButton.h>

@class MCDNowPlayingButtonView, NSString, UIImageView;

@interface MCDNowPlayingButton : UIButton

{
    MCDNowPlayingButtonView *_nowPlayingView;
    UIImageView *_focusBackgroundView;
    NSString *_stateName;
    double _height;
}

@property (nonatomic) double height;
@property (copy, nonatomic) NSString *stateName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buttonWithHeight:(double)arg1;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)setHighlighted:(_Bool)arg1;
- (void)nowPlayingObserver:(id)arg1 stateDidChanged:(_Bool)arg2;

@end
