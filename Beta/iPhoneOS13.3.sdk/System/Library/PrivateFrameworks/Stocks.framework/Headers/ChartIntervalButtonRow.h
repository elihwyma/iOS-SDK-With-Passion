/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UIView.h>

@class ChartIntervalButton, NSArray;

@protocol ChartIntervalButtonRowDelegate;

@interface ChartIntervalButtonRow : UIView

{
    id <ChartIntervalButtonRowDelegate> _delegate;
    NSArray *_intervalButtons;
    ChartIntervalButton *_selectedButton;
    long long _maxChartInterval;
}

@property (weak, nonatomic) id <ChartIntervalButtonRowDelegate> delegate;
@property (retain, nonatomic) NSArray *intervalButtons;
@property (weak, nonatomic) ChartIntervalButton *selectedButton;
@property (nonatomic) long long maxChartInterval;

- (void)layoutSubviews;
- (void)sizeToBoldLabels;
- (void)intervalButtonsTapped:(id)arg1;
- (long long)intervalForTouchLocation:(struct CGPoint)arg1;
- (void)selectChartIntervalButtonForInterval:(long long)arg1;
- (id)initWithMaxChartInterval:(long long)arg1 chartIntervalButtonRowDelegate:(id)arg2;
- (void)updateMaxChartInterval:(long long)arg1;

@end
