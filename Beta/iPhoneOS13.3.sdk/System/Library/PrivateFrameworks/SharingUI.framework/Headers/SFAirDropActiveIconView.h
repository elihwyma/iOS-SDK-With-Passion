/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/UIImageView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SFAirDropActiveIconView : UIImageView

{
    UIView *_circleMaskView;
    _Bool _masked;
}

@property (nonatomic, getter=isMasked) _Bool masked;

+ (id)baseImage;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 grayscale:(_Bool)arg2;

@end
