/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIImageView.h>

@class UIImage;

@interface _GKImageSpeechBalloonBackgroundView : UIImageView

{
    unsigned char _tipDirection;
    UIImage *_templateImage;
}

@property (nonatomic) unsigned char tipDirection;
@property (retain, nonatomic) UIImage *templateImage;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (void)updateTransform;
- (void)updateImage;
- (unsigned char)_tipDirectionForCurrentUILayoutDirection;

@end
