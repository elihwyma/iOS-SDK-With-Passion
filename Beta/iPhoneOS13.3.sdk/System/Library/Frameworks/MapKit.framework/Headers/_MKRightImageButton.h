/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIControl.h>

@class NSArray, NSString, UIImage, UIImageView, UITapGestureRecognizer, _MKUILabel;

__attribute__((visibility("hidden")))
@interface _MKRightImageButton : UIControl

{
    UITapGestureRecognizer *_gestureRecognizer;
    _Bool _titleConstraintsAdded;
    NSArray *_titleOnlyConstraints;
    NSArray *_titleAndImageConstraints;
    _Bool _highlighted;
    _MKUILabel *_titleLabel;
    UIImageView *_imageView;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) _MKUILabel *titleLabel;
@property (nonatomic, readonly) UIImageView *imageView;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (id)viewForLastBaselineLayout;
- (void)setTarget:(id)arg1 action:(SEL)arg2;

@end
