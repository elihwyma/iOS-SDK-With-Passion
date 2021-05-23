/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCornerView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSDate, NSString, NTKCurvedColoringLabel, NTKCurvedRoundedRectShapeLayer;

@protocol CLKMonochromeFilterProvider;

@interface NTKDateRichComplicationCornerView : NTKRichComplicationCornerView <Swift>

{
    NTKCurvedColoringLabel *_weekdayLabel;
    NTKCurvedColoringLabel *_previousDateLabel;
    NTKCurvedColoringLabel *_dateLabel;
    NTKCurvedColoringLabel *_nextDateLabel;
    NTKCurvedRoundedRectShapeLayer *_previousDatePlatter;
    NTKCurvedRoundedRectShapeLayer *_datePlatter;
    NTKCurvedRoundedRectShapeLayer *_nextDatePlatter;
    NSDate *_overrideDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_updateDate;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;
- (id)_createAndAddLabelPlatterWithAngularWidth:(double)arg1 color:(id)arg2;
- (id)_createAndAddColoringLabelWithFontSize:(double)arg1 dayOffset:(long long)arg2;
- (void)_timeChanged:(id)arg1;

@end
