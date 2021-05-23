/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKNavigatorViewController.h>

#import <OpusKit/Swift-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer, OKPageViewController, OKTimerAnimation, UIScrollView;

@interface OKNavigatorScrollViewControllerProxy : OKNavigatorViewController <Swift>

{
    OKPageViewController *_pageViewController;
    UIScrollView *_scrollView;
    double _velocityTimestamp;
    double _currentVelocity;
    double _currentTilt;
    double _currentRotationZ;
    NSTimer *_autopanningTimer;
    double _velocity2;
    NSMutableArray *_registeredObjects;
    NSMutableDictionary *_registeredActions;
    NSString *_viewDidScrollActionScript;
    struct CGPoint _lastOffset;
    OKTimerAnimation *_scrollingAnimation;
    double _velocity;
    double _tilt;
    double _rotationZ;
}

@property (nonatomic) double velocity;
@property (nonatomic) double tilt;
@property (nonatomic) double rotationZ;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (struct CGSize)contentSize;
- (void)viewDidLoad;
- (struct CGPoint)contentOffset;
- (_Bool)prepareForDisplay;
- (struct CGRect)contentBounds;
- (void)triggerAction;
- (void)updateParallax;
- (_Bool)prepareForWarmup;
- (_Bool)prepareForUnload;
- (struct CGSize)layoutFactor;
- (struct CGRect)visiblePageRect;
- (void)applySettings;
- (void)cancelCouchPotatoPlayback;
- (void)navigateToItemAtKeyPath:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updatePageViewController;
- (void)cleanupScrollEvents;
- (void)navigateToWidgetWithName:(id)arg1 animated:(_Bool)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)navigateToOffset:(struct CGPoint)arg1 animated:(_Bool)arg2 duration:(double)arg3 timingFunctionName:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)sectorKeysForRect:(struct CGRect)arg1;
- (id)keyForOffset:(struct CGPoint)arg1;
- (struct _OKEventElement *)createElementWithObject:(id)arg1 atOffset:(struct CGPoint)arg2 withProbability:(unsigned long long)arg3 withLimit:(unsigned long long)arg4;
- (struct _OKEventList *)createList;
- (void)insertElement:(struct _OKEventElement *)arg1 inList:(struct _OKEventList *)arg2;
- (void)deleteElement:(struct _OKEventElement *)arg1 inList:(struct _OKEventList *)arg2;
- (void)doMotionAction:(id)arg1;
- (void)doPanAction:(id)arg1;
- (void)setSettingContentSize:(struct CGSize)arg1;
- (void)doApplyMotion:(id)arg1;
- (void)scrollViewDidScrollProxy;
- (void)registerObjectOnScrollingEvent:(id)arg1;
- (void)registerObject:(id)arg1 forActionAtOffset:(struct CGPoint)arg2 probability:(unsigned long long)arg3 andLimit:(unsigned long long)arg4;
- (void)removeRegisteredObject:(id)arg1 forActionAtOffset:(struct CGPoint)arg2 continuous:(_Bool)arg3;
- (id)settingViewDidScrollActionScript;
- (void)setSettingViewDidScrollActionScript:(id)arg1;
- (void)doSwipeAction:(id)arg1;

@end
