/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NSArray, NTKCalendarRichComplicationContentView;

@interface NTKCalendarRichComplicationView : NTKRichComplicationRectangularBaseView

{
    NTKCalendarRichComplicationContentView *_contentView;
    NSArray *_accentViews;
    NSArray *_desaturateViews;
}

@property (retain, nonatomic) NTKCalendarRichComplicationContentView *contentView;
@property (retain, nonatomic) NSArray *accentViews;
@property (retain, nonatomic) NSArray *desaturateViews;

- (id)init;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_updateViews:(id)arg1 withFilter:(id)arg2;

@end
