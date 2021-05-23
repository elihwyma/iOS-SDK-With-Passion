/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIView.h>

@class NSLayoutXAxisAnchor, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface STHorizontalDivider : UIView

{
    UILabel *_label;
    NSLayoutXAxisAnchor *_horizontalLineRightAnchor;
    UIImageView *_horizontalLine;
}

@property (readonly) UIImageView *horizontalLine;
@property (readonly) UIImage *horizontalLineImage;
@property (readonly) UILabel *label;
@property (readonly) NSLayoutXAxisAnchor *horizontalLineRightAnchor;

- (id)initWithTintColor:(id)arg1;

@end
