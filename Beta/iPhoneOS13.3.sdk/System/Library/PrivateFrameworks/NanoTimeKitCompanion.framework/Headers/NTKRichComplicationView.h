/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKComplicationTemplate, CLKDevice, NSDate, NSString, UIColor;

@protocol CLKMonochromeFilterProvider, NTKComplicationDisplayObserver;

@interface NTKRichComplicationView : UIView <Swift>

{
    long long _family;
    _Bool _editing;
    _Bool _highlighted;
    NSDate *_timeTravelDate;
    _Bool canUseCurvedText;
    _Bool _paused;
    id <CLKMonochromeFilterProvider> _filterProvider;
    id <NTKComplicationDisplayObserver> displayObserver;
    CLKComplicationTemplate *_template;
    CLKDevice *_device;
    UIColor *_foregroundColor;
    UIColor *_templateBackgroundColor;
}

@property (nonatomic, readonly) CLKComplicationTemplate *template;
@property (nonatomic, readonly) NSDate *complicationDate;
@property (nonatomic, readonly) NSDate *timeTravelDate;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) long long family;
@property (nonatomic) _Bool paused;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *templateBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) _Bool canUseCurvedText;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool shouldUseTemplateColors;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

+ (_Bool)handlesComplicationTemplate:(id)arg1;

- (void)setEditing:(_Bool)arg1;
- (id)complicationTemplate;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_editingDidEnd;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;
- (id)interpolatedColorForView:(id)arg1;
- (_Bool)viewShouldIgnoreTwoPieceImage:(id)arg1;
- (void)_enumerateQuadViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_applyPausedUpdate;
- (id)initWithFamily:(long long)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;
- (void)_setWhistlerAnalogEditingAlphaTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (unsigned long long)timelineAnimationFadeTypeOverride;
- (void)setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3;
- (void)_transitToHighlightState:(_Bool)arg1 fraction:(double)arg2;

@end
