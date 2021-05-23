/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UILabel.h>

@interface ChartIntervalButton : UILabel

{
    _Bool _selected;
}

@property (nonatomic, getter=isSelected) _Bool selected;

+ (id)titleForInterval:(long long)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

@end
