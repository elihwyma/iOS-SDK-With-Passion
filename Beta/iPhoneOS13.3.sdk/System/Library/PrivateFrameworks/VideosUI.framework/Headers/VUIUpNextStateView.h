/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class VUILabel, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIUpNextStateView : UIView

{
    VUILabel *_label;
    _TVImageView *_imageView;
}

@property (retain, nonatomic) VUILabel *label;
@property (retain, nonatomic) _TVImageView *imageView;

@end
