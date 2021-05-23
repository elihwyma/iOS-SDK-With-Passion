/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIControl.h>

@class NSString, UIImageView;

@interface CAMControlDrawerButton : UIControl

{
    long long _layoutStyle;
    NSString *_contentSize;
    long long _orientation;
    UIImageView *__imageView;
    UIImageView *__backgroundView;
}

@property (nonatomic, readonly) UIImageView *_imageView;
@property (nonatomic, readonly) UIImageView *_backgroundView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, readonly) long long controlType;
@property (nonatomic, readonly, getter=isExpandable) _Bool expandable;
@property (nonatomic) NSString *contentSize;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_backgroundImage;
+ (struct CGSize)buttonSize;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)updateImage;
- (id)initWithLayoutStyle:(long long)arg1;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (id)imageNameForCurrentState;
- (_Bool)shouldUseActiveTintForCurrentState;
- (void)handleButtonReleased:(id)arg1;
- (_Bool)shouldScaleImageWhileHighlighted;
- (void)didChangeContentSize;

@end
