/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface PUAvalancheStackView : UIView

{
    CALayer *_imageLayer;
    CALayer *_stackLayer0;
    CALayer *_stackLayer1;
    long long _contentMode;
}

@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) CALayer *stackLayer0;
@property (retain, nonatomic) CALayer *stackLayer1;
@property (nonatomic) long long contentMode;

- (id)init;
- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)_imageContentFrame;

@end
