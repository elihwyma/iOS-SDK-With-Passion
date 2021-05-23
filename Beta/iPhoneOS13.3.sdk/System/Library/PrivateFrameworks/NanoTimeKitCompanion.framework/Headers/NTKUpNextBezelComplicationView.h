/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUpNextComplicationView.h>

@class UIColor;

@interface NTKUpNextBezelComplicationView : NTKUpNextComplicationView

{
    double _bezelLabelCircularRadius;
    long long _theme;
    UIColor *_bezelTextColor;
}

@property (nonatomic, readonly) double bezelLabelCircularRadius;
@property (nonatomic, readonly) long long theme;
@property (nonatomic, readonly) UIColor *bezelTextColor;
@property (nonatomic, readonly) double currentBezelTextWidth;

- (void)setTheme:(long long)arg1;
- (void)setBezelTextColor:(id)arg1;
- (void)setBezelLabelCircularRadius:(double)arg1;
- (void)_setView:(id)arg1 forSideAtIndex:(long long)arg2;
- (void)_enumerateBezelViewsWithBlock:(CDUnknownBlockType)arg1;

@end
