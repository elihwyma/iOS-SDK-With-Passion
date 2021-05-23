/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIControl.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKComplicationTemplate, NSDate, NSString, UIView;

@protocol CLKMonochromeFilterProvider, NTKComplicationDisplay, NTKComplicationDisplayWrapperViewAnimationDelegate;

@interface NTKComplicationDisplayWrapperView : UIControl <Swift>

{
    UIView<NTKComplicationDisplay> *_currentComplicationView;
    UIView<NTKComplicationDisplay> *_nextComplicationView;
    UIView<NTKComplicationDisplay> *_deferredComplicationView;
    UIView *_clipView;
    UIView *_earlierContainerView;
    UIView *_laterContainerView;
    CLKComplicationTemplate *_prevTemplate;
    CLKComplicationTemplate *_template;
    NSDate *_timeTravelDate;
    _Bool _didChangeLayoutOverride;
    _Bool _isAnimating;
    _Bool _isDetachedDisplay;
    _Bool _supportsCurvedText;
    _Bool _paused;
    _Bool _editing;
    _Bool _tapEnabled;
    _Bool _dimmed;
    _Bool _hasLegacyDisplay;
    long long _family;
    NSString *_complicationSlotIdentifier;
    UIView<NTKComplicationDisplay> *_display;
    CDUnknownBlockType _displayConfigurationHandler;
    CDUnknownBlockType _touchDownHandler;
    CDUnknownBlockType _touchUpInsideHandler;
    id <NTKComplicationDisplayWrapperViewAnimationDelegate> _animationDelegate;
    CDUnknownBlockType _needsResizeHandler;
    CLKComplicationTemplate *_complicationTemplate;
    double _alphaForDimmedState;
    long long _layoutOverride;
    id <CLKMonochromeFilterProvider> _filterProvider;
    struct CGSize _maxSize;
}

@property (nonatomic, readonly) long long family;
@property (retain, nonatomic) NSString *complicationSlotIdentifier;
@property (nonatomic) _Bool supportsCurvedText;
@property (nonatomic, readonly) UIView<NTKComplicationDisplay> *display;
@property (copy, nonatomic) CDUnknownBlockType displayConfigurationHandler;
@property (nonatomic) _Bool paused;
@property (nonatomic) _Bool editing;
@property (nonatomic) _Bool tapEnabled;
@property (copy, nonatomic) CDUnknownBlockType touchDownHandler;
@property (copy, nonatomic) CDUnknownBlockType touchUpInsideHandler;
@property (weak, nonatomic) id <NTKComplicationDisplayWrapperViewAnimationDelegate> animationDelegate;
@property (nonatomic) struct CGSize maxSize;
@property (copy, nonatomic) CDUnknownBlockType needsResizeHandler;
@property (nonatomic, readonly) CLKComplicationTemplate *complicationTemplate;
@property (nonatomic, getter=isDimmed) _Bool dimmed;
@property (nonatomic) double alphaForDimmedState;
@property (nonatomic, readonly) _Bool hasLegacyDisplay;
@property (nonatomic, readonly) struct CGSize preferredSize;
@property (nonatomic, readonly) long long layoutOverride;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)needsResize;
- (void)sensitiveUIStateChanged;
- (void)setDimmed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setDimmed:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFamily:(long long)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (id)initWithCustomTemplateDisplay:(id)arg1 isDetachedDisplay:(_Bool)arg2 family:(long long)arg3;
- (id)initWithLegacyDisplay:(id)arg1 layoutOverride:(long long)arg2;
- (void)complicationDisplayNeedsResize:(id)arg1;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2 animation:(unsigned long long)arg3;
- (_Bool)shouldCancelTouchesInScrollview;
- (void)_invokeTouchUpInsideHandler;
- (void)_invokeTouchDownHandler;
- (id)initWithLegacyDisplay:(id)arg1;
- (void)_setDisplay:(id)arg1 withComplicationAnimation:(unsigned long long)arg2 animationType:(unsigned long long)arg3 animationFraction:(float)arg4;
- (void)_setComplicationTemplate:(id)arg1 reason:(long long)arg2 animation:(unsigned long long)arg3 animationType:(unsigned long long)arg4 animationFraction:(float)arg5;
- (void)_replaceDisplayWithDisplayClass:(Class)arg1 template:(id)arg2 reason:(long long)arg3 animation:(unsigned long long)arg4 animationType:(unsigned long long)arg5 animationFraction:(float)arg6;
- (void)_updateVisibilityForSensitivity:(long long)arg1;
- (void)_prepareToSetDisplay:(id)arg1 withComplicationAnimation:(inout unsigned long long *)arg2;
- (void)_didSetDisplayFromDisplay:(id)arg1 withComplicationAnimation:(unsigned long long)arg2;
- (void)_invokeNeedsResizeHandler;
- (void)_setDisplayEditing:(_Bool)arg1;
- (void)_setDisplayMaxSize:(struct CGSize)arg1;
- (void)_tryToSetDisplayHighlighted:(_Bool)arg1;
- (_Bool)_displayIsTappable;
- (void)_removeDisplay:(id)arg1;
- (void)setComplicationView:(id)arg1 withComplicationAnimation:(unsigned long long)arg2 animationType:(unsigned long long)arg3 animationFraction:(float)arg4;
- (void)_timelineAnimationDidFinish;
- (void)_resetComplicationViews;

@end
