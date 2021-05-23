/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSNumberFormatter, NSOperationQueue, NSTimer, SKUIClientContext, SKUICountdown, SKUICountdownViewTimerTarget, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUICountdownView : UIView

{
    SKUIClientContext *_clientContext;
    SKUICountdown *_countdown;
    NSTimer *_timer;
    SKUICountdownViewTimerTarget *_timerTarget;
    UILabel *_dateDescriptionLabelDay;
    UILabel *_dateDescriptionLabelHour;
    UILabel *_dateDescriptionLabelMinute;
    UILabel *_dateDescriptionLabelSecond;
    UILabel *_dateLabelDay;
    UILabel *_dateLabelHour;
    UILabel *_dateLabelMinute;
    UILabel *_dateLabelSecond;
    NSMutableArray *_dateFlapLabels;
    NSMutableArray *_numberFlapLabels;
    NSMutableArray *_numberSeparatorLabels;
    UIImageView *_imageView;
    UILabel *_numberLabel;
    NSNumberFormatter *_numberFormatter;
    NSOperationQueue *_operationQueue;
    double _factor;
}

@property (nonatomic, readonly) SKUICountdown *countdown;
@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (retain, nonatomic) UIImage *backgroundImage;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (long long)_currentValue;
- (void)_reload;
- (void)_setCountdownWithResponse:(id)arg1 error:(id)arg2;
- (void)_reloadFontSizes;
- (void)_reloadNumberFlapped;
- (void)_reloadNumber;
- (void)_reloadTimeFlapped;
- (void)_reloadDateDescriptions:(_Bool)arg1;
- (void)_reloadTime;
- (id)_newNumberSeparatorLabel;
- (id)_newFlapLabelWithPosition:(long long)arg1;
- (void)_currentRemainingDays:(long long *)arg1 hours:(long long *)arg2 minutes:(long long *)arg3 seconds:(long long *)arg4;
- (id)_newDateDescriptionLabel;
- (id)_newDateLabel;
- (id)initWithCountdown:(id)arg1 clientContext:(id)arg2;

@end
