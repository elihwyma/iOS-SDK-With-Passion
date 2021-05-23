/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NSArray, NTKColoringLabel, UIColor, UILabel;

@interface NTKRichComplicationRectangularDailyGraphView : NTKRichComplicationRectangularBaseView

{
    NTKColoringLabel *_titleLabel;
    UILabel *_dailyHighLabel;
    UILabel *_dailyLowLabel;
    UIColor *_noDataTextColor;
    UIColor *_graphLabelAndGridColor;
    NSArray *_timeMarkerLabels;
    struct CGRect _cachedBounds;
    struct CGRect _graphRect;
}

@property (nonatomic, readonly) double timeMarkerPadding;
@property (nonatomic) struct CGRect cachedBounds;
@property (nonatomic) struct CGRect graphRect;
@property (nonatomic, readonly) UIColor *noDataTextColor;
@property (nonatomic, readonly) UIColor *graphLabelAndGridColor;
@property (nonatomic, readonly) NSArray *timeMarkerLabels;
@property (nonatomic, readonly) NTKColoringLabel *titleLabel;
@property (nonatomic, readonly) UILabel *dailyHighLabel;
@property (nonatomic, readonly) UILabel *dailyLowLabel;

+ (struct CGSize)graphSize;
+ (id)dailyFormattedNoData;

- (id)init;
- (void)drawRect:(struct CGRect)arg1;
- (void)_addConstraints;
- (void)_addSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_drawVerticalHourLines:(struct CGContext *)arg1 rect:(struct CGRect)arg2 bottomLabelPadding:(double)arg3;
- (struct CGRect)drawableGraphRect;
- (void)drawGraph:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (id)_datesForGraphInTimezone:(id)arg1;
- (void)_updateTimeMarkerLabelsForDates:(id)arg1 timezone:(id)arg2;
- (void)loadWithMetadata:(id)arg1;
- (double)_calculateGraphXBasedOnRect:(struct CGRect)arg1 constants:(CDStruct_05cddbcc)arg2;
- (void)resetToNoDataState:(id)arg1;
- (double)_lineStrokeWidthGivenRect:(struct CGRect)arg1;

@end
