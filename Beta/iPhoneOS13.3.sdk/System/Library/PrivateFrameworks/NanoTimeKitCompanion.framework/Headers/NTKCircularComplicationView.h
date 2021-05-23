/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKComplicationTemplate, CLKDevice, NSDate, NSString, UIColor;

@protocol NTKComplicationDisplayObserver;

@interface NTKCircularComplicationView : UIView <Swift>

{
    UIView *_platter;
    UIView *_highlightView;
    NSDate *_timeTravelDate;
    UIColor *_computedForegroundColor;
    UIColor *_computedPlatterColor;
    _Bool canUseCurvedText;
    _Bool _useRoundedFontDesign;
    _Bool _usesMediumLayout;
    _Bool _wantsPlatter;
    _Bool _usesMultiColor;
    id <NTKComplicationDisplayObserver> displayObserver;
    CLKDevice *_device;
    UIColor *_foregroundColor;
    UIColor *_platterColor;
    CLKComplicationTemplate *_complicationTemplate;
}

@property (nonatomic, readonly) CLKComplicationTemplate *complicationTemplate;
@property (nonatomic, readonly) CLKDevice *device;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *platterColor;
@property (nonatomic) _Bool useRoundedFontDesign;
@property (nonatomic) _Bool usesMediumLayout;
@property (nonatomic) _Bool wantsPlatter;
@property (nonatomic) _Bool usesMultiColor;
@property (readonly) NSDate *timeTravelDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) _Bool canUseCurvedText;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool shouldUseTemplateColors;

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (id)viewForComplicationType:(unsigned long long)arg1;
+ (id)_stopwatchImageProviderMedium:(_Bool)arg1;
+ (id)mediumViewForComplicationType:(unsigned long long)arg1;
+ (id)_timerImageProviderMedium:(_Bool)arg1;
+ (id)_alarmImageProviderMedium:(_Bool)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (CDStruct_69ceb9b6)_layoutConstants;
- (void)_computeForegroundColor;
- (void)_computePlatterColor;
- (void)_updateColorChange;
- (void)_updateForegroundColor;
- (void)_updatePlatterColor;
- (void)_updateLabelsForFontChange;
- (id)_computedForegroundColor;
- (void)_updateForTemplateChange;
- (long long)_variableFontSizeForText:(id)arg1;
- (id)_computedPlatterColor;
- (void)_updateImageViewColor:(id)arg1;
- (void)_updateLabelViewColor:(id)arg1;
- (id)_mediumStackFontForText:(id)arg1;
- (id)_fontForDynamicFontSize:(long long)arg1;

@end
