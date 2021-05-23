/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface CAMShutterButtonRingView : UIView

{
    _Bool _showContrastBorder;
    UIColor *_color;
    struct CAMShutterButtonSpec _spec;
}

@property (nonatomic) struct CAMShutterButtonSpec spec;
@property (nonatomic) _Bool showContrastBorder;
@property (retain, nonatomic) UIColor *color;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithSpec:(struct CAMShutterButtonSpec)arg1;

@end
