/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface SBRoundedRectBorderView : UIView

@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;

- (id)initWithFrame:(struct CGRect)arg1;

@end
