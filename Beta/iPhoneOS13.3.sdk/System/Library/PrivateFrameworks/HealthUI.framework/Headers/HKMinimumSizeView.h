/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@interface HKMinimumSizeView : UIView

{
    double _minimumHeight;
    double _minimumWidth;
}

@property (nonatomic) double minimumHeight;
@property (nonatomic) double minimumWidth;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
