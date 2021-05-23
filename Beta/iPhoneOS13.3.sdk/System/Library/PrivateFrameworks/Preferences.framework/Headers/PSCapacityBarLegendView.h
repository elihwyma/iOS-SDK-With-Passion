/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UIView.h>

@class NSString, PSLegendColorView, UIColor, UILabel;

@interface PSCapacityBarLegendView : UIView

{
    PSLegendColorView *_legendColor;
    UILabel *_legendLabel;
}

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;

- (void)createConstraints;
- (id)initWithCapacityBarCategory:(id)arg1;

@end
