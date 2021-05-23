/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKPageViewController.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, OKPageView, UICollisionBehavior, UIDynamicAnimator, UIGravityBehavior;

@interface OKPageUXViewController : OKPageViewController

{
    NSMutableArray *_widgetViews;
    NSMutableArray *_newWidgetViews;
    NSMutableArray *_pageViewZones;
    struct CGSize _pageViewZoneSize;
    _Bool _parallaxEnabled;
    double _parallaxRatioX;
    double _parallaxRatioY;
    struct CGPoint _lastParallaxOffset;
    _Bool _dynamicsEnabled;
    UIDynamicAnimator *_dynamicsAnimator;
    UIGravityBehavior *_dynamicsGravityBehavior;
    _Bool _dynamicsGravityBehaviorMotionDriven;
    UICollisionBehavior *_dynamicsPageCollisionBehavior;
    NSMutableDictionary *_dynamicsWidgetCollisionBehaviors;
    NSMutableDictionary *_dynamicsPushBehaviors;
    OKPageView *_pageView;
}

@property (nonatomic) double parallaxRatioX;
@property (nonatomic) double parallaxRatioY;
@property (nonatomic) struct CGPoint lastParallaxOffset;
@property (retain, nonatomic, readonly) UIDynamicAnimator *dynamicsAnimator;
@property (retain, nonatomic, readonly) OKPageView *pageView;
@property (retain, nonatomic, readonly) NSArray *widgetViews;
@property (nonatomic, readonly) _Bool parallaxEnabled;
@property (nonatomic, readonly) _Bool dynamicsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)viewClass;
+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)arg1;
- (void)commonInit;
- (void)viewDidLoad;
- (_Bool)prepareForDisplay;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withItem:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withItem:(id)arg3;
- (void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3;
- (void)dynamicAnimatorDidPause:(id)arg1;
- (void)dynamicAnimatorWillResume:(id)arg1;
- (void)prepareForReload;
- (void)instantPause;
- (id)settingObjectForKey:(id)arg1;
- (id)visibleWidgets;
- (id)pageViewForWidgetView:(id)arg1;
- (id)widgetViewResolution:(id)arg1;
- (void)widgetViewCancelAllOperations:(id)arg1;
- (void)widgetViewCancelAllOperations:(id)arg1 withIdentifier:(id)arg2;
- (void)widgetView:(id)arg1 addHighSpeedOperations:(id)arg2 andConsumingOperations:(id)arg3;
- (void)networkStatusDidChange:(long long)arg1;
- (void)resolutionDidChange;
- (void)layoutDidChange;
- (void)reloadPageViewZones;
- (id)widgetViewForName:(id)arg1 recursively:(_Bool)arg2;
- (struct CGRect)calculateVisibleRectForWidgetRect:(struct CGRect)arg1 withParallax:(double)arg2;
- (void)reloadPageViewZonesWithSize:(struct CGSize)arg1;
- (struct CGRect)calculateVisibleRectForWidget:(id)arg1;
- (id)pageViewZonesInRect:(struct CGRect)arg1;
- (void)reloadPageViewZonesForSubwidgets:(id)arg1 withParallax:(double)arg2;
- (struct CGPoint)parallaxWithOffsetX:(double)arg1 offsetY:(double)arg2 zPosition:(double)arg3;
- (void)removeWidgetViewInPageViewZones:(id)arg1;
- (id)newWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3;
- (void)addWidgetViewInPageViewZones:(id)arg1;
- (id)mediaURLs;
- (void)widgetViewsInDisplayRect:(struct CGRect)arg1 displaySet:(id)arg2 andWarmupRect:(struct CGRect)arg3 warmupSet:(id)arg4;
- (id)widgetViewsInRect:(struct CGRect)arg1;
- (void)updateMotion;
- (void)updateParallax;
- (void)updateDynamics;
- (_Bool)prepareForWarmup;
- (_Bool)prepareForUnload;
- (void)prepareForRefresh;
- (void)instantResume;
- (void)updateWithMotionTiltRotationX:(double)arg1 tiltRotationY:(double)arg2 tiltRotationZ:(double)arg3;
- (id)_preparseLayoutString:(id)arg1 targetView:(out id *)arg2 anchorView:(out id *)arg3;
- (unsigned long long)countOfDictionaryProxy:(id)arg1;
- (id)widgetViewNames;
- (id)allKeysForDictionaryProxy:(id)arg1;
- (id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2;
- (id)_remoteWidgetsForWidgetView:(id)arg1 keyPath:(id)arg2;
- (_Bool)settingDynamicsGravityEnabled;
- (_Bool)settingDynamicsCollisionConfinementEnabled;
- (void)reloadDynamics;
- (void)resetDynamics;
- (void)removeWidgetView:(id)arg1;
- (_Bool)hasWidgetFocused;
- (id)addWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3;
- (struct CGPoint)convertPointWithMotionAndParallax:(struct CGPoint)arg1 andZPosition:(double)arg2;
- (void)applySettings;
- (void)updateWidgetViewInPageViewZones:(id)arg1;
- (void)prepareWidgetsInRect:(struct CGRect)arg1;
- (void)prepareAllWidgets;
- (void)updateMotionForWidgetView:(id)arg1;
- (void)updateParallaxWithOffsetX:(double)arg1 offsetY:(double)arg2;
- (void)updateParallaxForWidgetView:(id)arg1;
- (void)updateLayoutSteps;
- (id)currentRemoteWidgets;
- (void)setSettingParallaxEnabled:(_Bool)arg1;
- (void)setSettingParallaxRatioX:(double)arg1;
- (void)setSettingParallaxRatioY:(double)arg1;
- (void)setSettingDynamicsEnabled:(_Bool)arg1;
- (void)setSettingDynamicsGravityEnabled:(_Bool)arg1;
- (void)setSettingDynamicsGravityAngle:(float)arg1;
- (void)setSettingDynamicsGravityMagnitude:(float)arg1;
- (void)setSettingDynamicsGravityMotionDriven:(_Bool)arg1;
- (void)setSettingDynamicsCollisionConfinementEnabled:(_Bool)arg1;
- (void)setSettingDynamicsPushBehaviors:(id)arg1;

@end
