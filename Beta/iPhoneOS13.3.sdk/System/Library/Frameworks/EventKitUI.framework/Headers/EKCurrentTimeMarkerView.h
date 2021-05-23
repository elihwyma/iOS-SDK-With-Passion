/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface EKCurrentTimeMarkerView : UIView

{
    _Bool _showsThumb;
    _Bool _showsLine;
    UILabel *_currentTimeLabel;
}

@property (retain, nonatomic) UILabel *currentTimeLabel;
@property (nonatomic) _Bool showsThumb;
@property (nonatomic) _Bool showsLine;
@property (nonatomic, readonly) double markerWidth;
@property (nonatomic, readonly) double markerMidHeight;
@property (nonatomic, readonly) struct CGRect currentTimeFrame;

+ (id)timeMarkerFontForSizeClass:(long long)arg1;
+ (double)_spacingAdjustmentFontSize;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateTime;
- (id)initWithFrame:(struct CGRect)arg1 sizeClass:(long long)arg2;
- (void)invalidateFonts;
- (void)_updateTimeWithForce:(_Bool)arg1;
- (void)_updateTimeLabelColor;
- (struct CGRect)_lineFrame;

@end
