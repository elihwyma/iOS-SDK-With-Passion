/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface PSLegendColorView : UIView

{
    UIColor *_color;
}

@property (retain, nonatomic) UIColor *color;

- (id)initWithColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
