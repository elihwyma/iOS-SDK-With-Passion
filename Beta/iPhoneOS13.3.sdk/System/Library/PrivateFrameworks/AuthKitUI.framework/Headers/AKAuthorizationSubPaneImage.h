/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <AuthKitUI/AKAuthorizationSubPane.h>

@class UIImage, UIImageView;

@interface AKAuthorizationSubPaneImage : AKAuthorizationSubPane

{
    UIImageView *_imageView;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (copy, nonatomic) UIImage *image;

+ (id)imageViewWithImage:(id)arg1;

- (id)initWithImage:(id)arg1;
- (void)addToStackView:(id)arg1 context:(id)arg2;
- (void)addToConstraints:(id)arg1 context:(id)arg2;

@end
