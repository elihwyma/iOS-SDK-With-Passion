/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplicationModuleView.h>

@class CLKComplicationTemplate, NSDate, NSString;

@protocol NTKComplicationDisplayObserver;

@interface NTKModularTemplateView : NTKComplicationModuleView

{
    NSDate *_timeTravelDate;
    CLKComplicationTemplate *_complicationTemplate;
    unsigned long long _highlightMode;
}

@property (retain, nonatomic) CLKComplicationTemplate *complicationTemplate;
@property (readonly) NSDate *timeTravelDate;
@property (nonatomic) unsigned long long highlightMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) _Bool canUseCurvedText;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool shouldUseTemplateColors;

+ (_Bool)handlesComplicationTemplate:(id)arg1;

- (void)_update;
- (void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)setContainsOverrideFaceColor:(id)arg1;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (void)_propagateColorSchemeToSubviews:(id)arg1;
- (void)_setColorScheme:(id)arg1 propagateToSubviews:(_Bool)arg2;
- (_Bool)_useInvertedHighlightForColorScheme:(id)arg1;
- (void)_enumerateColoringViewsSubviewsWithBlock:(CDUnknownBlockType)arg1 invertedHighlight:(_Bool)arg2;

@end
