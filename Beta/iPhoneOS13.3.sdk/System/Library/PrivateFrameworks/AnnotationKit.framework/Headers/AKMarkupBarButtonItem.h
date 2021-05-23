/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIBarButtonItem.h>

@class AKMarkupButtonContainerView, UIButton, UIImage;

@interface AKMarkupBarButtonItem : UIBarButtonItem

{
    UIButton *_toggleButton;
    AKMarkupButtonContainerView *_toggleView;
    UIImage *_toggleButtonImage;
}

@property (retain, nonatomic) UIButton *toggleButton;
@property (retain, nonatomic) AKMarkupButtonContainerView *toggleView;
@property (retain, nonatomic) UIImage *toggleButtonImage;

+ (id)markupBarButtonWithTarget:(id)arg1 action:(SEL)arg2;

- (id)init;
- (void)setEnabled:(_Bool)arg1;
- (void)setTarget:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setSelected:(_Bool)arg1;

@end
