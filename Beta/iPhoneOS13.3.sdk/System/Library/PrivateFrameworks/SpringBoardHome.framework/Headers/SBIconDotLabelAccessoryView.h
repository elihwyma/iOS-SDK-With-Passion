/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBIconLabelAccessoryView.h>

@class UIImageView;

@interface SBIconDotLabelAccessoryView : SBIconLabelAccessoryView

{
    UIImageView *_imageView;
}

+ (id)_dotColor;
+ (id)labelAccessorySystemImageName;
+ (struct CAColorMatrix)_vibrantColorMatrixInput;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithBaseImage:(id)arg1 legibilitySettings:(id)arg2;

@end
