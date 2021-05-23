/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationBezelView.h>

@class NTKCurvedColoringLabel, NTKRichComplicationView;

@interface NTKRichComplicationBezelBaseCircularView : NTKRichComplicationBezelView

{
    NTKRichComplicationView *_circularView;
    double _circularViewRotationInDegree;
    NTKCurvedColoringLabel *_bezelTextLabel;
    double _bezelTextLabelRotationInDegree;
    double _newDataAnimationCircularScale;
    double _newDataAnimationBezelLabelScale;
    _Bool _allowUpdatingBezelTextProperties;
    _Bool _allowNofityingDelegateWithBezelTextUpdate;
    long long _fromTheme;
    long long _toTheme;
    double _themeFraction;
    _Bool _inMonochromeMode;
    double _bezelLabelCircularRadius;
}

@property (nonatomic, readonly) NTKRichComplicationView *circularView;
@property (nonatomic) double bezelLabelCircularRadius;

+ (void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(_Bool)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6 bezelTextUpdateHandler:(CDUnknownBlockType)arg7;

- (id)init;
- (id)description;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_editingDidEnd;
- (Class)_circularViewClassFromFromTemplate:(id)arg1;
- (id)_circularTemplateFromTemplate:(id)arg1;
- (id)_bezelTextProviderFromTemplate:(id)arg1;
- (void)_applyPausedUpdate;
- (void)setBezelTextColor:(id)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_transitThemeFromTheme:(long long)arg1 toTheme:(long long)arg2 fraction:(double)arg3;
- (void)_transitToHighlightState:(_Bool)arg1 fraction:(double)arg2;
- (void)_createBezelLabel;
- (void)_layoutCircularView;
- (void)_layoutBezelLabel;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (struct CGPoint)circularViewCenter;
- (void)_updateNewDataAnimationFinalAlpha:(double)arg1 finalBezelLabelScale:(double)arg2 finalCircularViewScale:(double)arg3 animationApplierBlock:(CDUnknownBlockType)arg4 animationFraction:(float)arg5;

@end
