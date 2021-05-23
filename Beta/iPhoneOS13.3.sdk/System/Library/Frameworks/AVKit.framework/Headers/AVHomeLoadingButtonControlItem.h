/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVKit/AVControlItem.h>

@class AVLoadingButtonView;

@interface AVHomeLoadingButtonControlItem : AVControlItem

{
    AVLoadingButtonView *_loadingButtonView;
}

@property (retain, nonatomic) AVLoadingButtonView *loadingButtonView;
@property (nonatomic) _Bool showsLoadingIndicator;

- (id)view;
- (void)_updateTintColor;
- (id)initWithTitle:(id)arg1 type:(long long)arg2;
- (void)_buttonTouchUpInside:(id)arg1;

@end
