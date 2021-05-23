/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIButton.h>

@interface HKCurrentTimeChevronButton : UIButton

{
    long long _chevronDirection;
}

@property (nonatomic) long long chevronDirection;

- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (void)_updateButtonAppearence;
- (struct CGRect)_squareRectWithDimension:(double)arg1 chevronDirection:(long long)arg2;
- (id)initWithChevronDirection:(long long)arg1;

@end
