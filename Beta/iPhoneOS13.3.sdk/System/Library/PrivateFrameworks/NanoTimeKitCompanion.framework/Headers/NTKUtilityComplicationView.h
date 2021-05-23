/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKComplicationTemplate, CLKDevice, CLKFont, NSDate, NSString, NTKFaceColorScheme, UIColor, UIImageView;

@protocol NTKComplicationDisplayObserver;

@interface NTKUtilityComplicationView : UIView <Swift>

{
    _Bool _highlighted;
    _Bool _usesLegibility;
    UIColor *_foregroundColor;
    CLKFont *_font;
    NSDate *_timeTravelDate;
    UIColor *_computedForegroundColor;
    UIColor *_computedPlatterColor;
    double _computedForegroundAlpha;
    double _computedForegroundImageAlpha;
    _Bool _canUseCurvedText;
    _Bool _shouldUseBackgroundPlatter;
    _Bool _alwaysEnforcePlatterInset;
    _Bool _useRoundedFontDesign;
    _Bool _useBlockyHighlightCorners;
    _Bool _suppressesInternalColorOverrides;
    _Bool _editing;
    id <NTKComplicationDisplayObserver> displayObserver;
    double _foregroundAlpha;
    UIColor *_shadowColor;
    CLKDevice *_device;
    UIColor *_accentColor;
    double _foregroundImageAlpha;
    unsigned long long _placement;
    double _fontWeight;
    double _editingRotationAngle;
    UIImageView *_backgroundPlatter;
    double _minimumWidth;
    UIView *_highlightView;
    NTKFaceColorScheme *_colorScheme;
    UIColor *_overrideColor;
    UIColor *_platterColor;
    CLKComplicationTemplate *_complicationTemplate;
    struct CGSize _maxSize;
    struct UIEdgeInsets _touchEdgeInsets;
}

@property (retain, nonatomic) UIImageView *backgroundPlatter;
@property (nonatomic) double minimumWidth;
@property (retain, nonatomic) UIView *highlightView;
@property (nonatomic) struct UIEdgeInsets touchEdgeInsets;
@property (retain, nonatomic) NTKFaceColorScheme *colorScheme;
@property (retain, nonatomic) UIColor *overrideColor;
@property (retain, nonatomic) UIColor *platterColor;
@property (nonatomic, readonly) struct CGSize maxSize;
@property (nonatomic, readonly) _Bool editing;
@property (nonatomic, readonly) CLKComplicationTemplate *complicationTemplate;
@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIColor *accentColor;
@property (nonatomic) _Bool usesLegibility;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic) double foregroundImageAlpha;
@property (nonatomic) unsigned long long placement;
@property (nonatomic) _Bool shouldUseBackgroundPlatter;
@property (nonatomic) _Bool alwaysEnforcePlatterInset;
@property (readonly) NSDate *timeTravelDate;
@property (nonatomic) _Bool useRoundedFontDesign;
@property (nonatomic) double fontWeight;
@property (retain, nonatomic) CLKFont *font;
@property (nonatomic) _Bool useBlockyHighlightCorners;
@property (nonatomic) double editingRotationAngle;
@property (nonatomic) _Bool suppressesInternalColorOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) _Bool canUseCurvedText;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool shouldUseTemplateColors;

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (id)largeComplicationViewForType:(unsigned long long)arg1 narrow:(_Bool)arg2;
+ (id)smallComplicationViewForType:(unsigned long long)arg1;
+ (id)_stopwatchImageProvider;
+ (id)_preferredAdditionalFontSettings;
+ (id)_timerImageProvider;
+ (id)_alarmImageProviderActive:(_Bool)arg1;

- (void)setMaxSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setEditing:(_Bool)arg1;
- (id)_standardFont;
- (void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (id)_newImageViewSubview;
- (void)_computeForegroundColor;
- (void)_computePlatterColor;
- (void)_updateForegroundColor;
- (void)_updatePlatterColor;
- (void)_updateLabelsForFontChange;
- (id)_computedForegroundColor;
- (void)_updateForTemplateChange;
- (id)_computedPlatterColor;
- (void)_updateImageViewColor:(id)arg1;
- (id)_newHighlightView;
- (void)_computeForegroundAlpha;
- (void)_computeForegroundImageAlpha;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateForegroundAlpha;
- (void)_applyForegroundAlpha;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_applyColorScheme:(id)arg1;
- (struct UIEdgeInsets)_touchEdgeInsetsForPlacement:(unsigned long long)arg1;
- (double)_widthThatFits;
- (_Bool)shouldUsePlatterInset;
- (id)_backgroundPlatterImage;
- (void)_updateContentForMaxSizeChange;
- (void)_updateContentForEditingChange;
- (id)_smallCapsFont;
- (id)_newLabelSubviewWithFont:(id)arg1 variant:(_Bool)arg2;
- (id)_newStandardLabelSubviewVariant:(_Bool)arg1;
- (id)_newHighlightViewVariant:(_Bool)arg1;
- (id)_newImageViewSubviewWithAlpha:(double)arg1;
- (void)_updateForegroundImageAlpha;
- (_Bool)isPlacementForTopBezelComplication;
- (void)layoutLabelVertically:(id)arg1;
- (void)_updateImageViewAlpha:(id)arg1;
- (id)_newDigitalTimeLabelSubviewWithOptions:(unsigned long long)arg1;
- (id)_newStandardLabelSubview;
- (id)_newStandardCurvedLabelSubview;
- (id)_newCurvedHighlightView;

@end
