/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDateRichComplicationFullColorImageView : UIView <CLKFullColorImageView> {
    NTKColoringLabel * _dayLabel;
    CLKDevice * _device;
    <CLKMonochromeFilterProvider> * _filterProvider;
    NSDate * _overrideDate;
    NTKColoringLabel * _weekdayLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *overrideDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_timeChanged:(id)arg1;
- (void)_updateDate;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (void)dealloc;
- (id)filterProvider;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)layoutSubviews;
- (id)overrideDate;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)setFilterProvider:(id)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end