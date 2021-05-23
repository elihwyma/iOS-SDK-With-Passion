/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, NSDate, NSString, NTKColoringLabel;

@protocol CLKMonochromeFilterProvider;

@interface NTKDateRichComplicationFullColorImageView : UIView

{
    CLKDevice *_device;
    NTKColoringLabel *_weekdayLabel;
    NTKColoringLabel *_dayLabel;
    id <CLKMonochromeFilterProvider> _filterProvider;
    NSDate *_overrideDate;
}

@property (retain, nonatomic) NSDate *overrideDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (void)dealloc;
- (void)_commonInit;
- (void)layoutSubviews;
- (void)_updateDate;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_timeChanged:(id)arg1;

@end
