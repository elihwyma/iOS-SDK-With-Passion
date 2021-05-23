/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <MusicCarDisplayUI/MCDPlayModeButton.h>

@class UIImage;

@interface MCDRepeatButton : MCDPlayModeButton

{
    UIImage *_repeatImage;
    UIImage *_repeatOneImage;
}

@property (retain, nonatomic) UIImage *repeatImage;
@property (retain, nonatomic) UIImage *repeatOneImage;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setRepeatType:(long long)arg1;

@end
