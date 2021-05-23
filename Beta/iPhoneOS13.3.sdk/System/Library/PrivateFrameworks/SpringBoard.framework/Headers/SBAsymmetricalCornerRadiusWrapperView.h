/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class BSCornerRadiusConfiguration;

@interface SBAsymmetricalCornerRadiusWrapperView : UIView

{
    BSCornerRadiusConfiguration *_cornerRadiusConfiguration;
    unsigned long long _maskedCorners;
    UIView *_trailingCornersMaskingView;
}

@property (retain, nonatomic) UIView *trailingCornersMaskingView;
@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) unsigned long long maskedCorners;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setClipsToBounds:(_Bool)arg1;
- (void)_updateCornerRadius;
- (void)addContentView:(id)arg1;
- (void)bringContentViewToFront:(id)arg1;
- (void)sendContentViewToBack:(id)arg1;
- (void)_updateMaskedCorners;

@end
