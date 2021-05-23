/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, PUAirPlayContentRegistry, PUAirPlayRootViewController, PUAirPlayRouteObserverRegistry, PUAirPlayScreen, PUAirPlayScreenDetector, UIViewController;

@interface PHAirPlayScreenController : NSObject

{
    PUAirPlayScreen *__currentScreen;
    PUAirPlayScreenDetector *__screenDetector;
    PUAirPlayRootViewController *__rootViewController;
    PUAirPlayContentRegistry *__contentRegistry;
    PUAirPlayRouteObserverRegistry *__routeObserverRegistry;
    UIViewController *__lastDisplayedContent;
    NSDate *__lastScreenConnectDate;
    NSDate *__lastScreenRequestDate;
    long long __lastScreenRequestOrigin;
}

@property (retain, nonatomic, setter=_setCurrentScreen:) PUAirPlayScreen *_currentScreen;
@property (retain, nonatomic, setter=_setScreenDetector:) PUAirPlayScreenDetector *_screenDetector;
@property (retain, nonatomic, setter=_setRootViewController:) PUAirPlayRootViewController *_rootViewController;
@property (retain, nonatomic, setter=_setContentRegistry:) PUAirPlayContentRegistry *_contentRegistry;
@property (retain, nonatomic, setter=_setRouteObserverRegistry:) PUAirPlayRouteObserverRegistry *_routeObserverRegistry;
@property (retain, nonatomic, setter=_setLastDisplayedContent:) UIViewController *_lastDisplayedContent;
@property (retain, nonatomic, setter=_setLastScreenConnectDate:) NSDate *_lastScreenConnectDate;
@property (retain, nonatomic, setter=_setLastScreenRequestDate:) NSDate *_lastScreenRequestDate;
@property (nonatomic, setter=_setLastScreenRequestOrigin:) long long _lastScreenRequestOrigin;
@property (nonatomic, readonly, getter=isDisplayingContent) _Bool displayingContent;
@property (nonatomic, readonly) unsigned long long screenAvailability;
@property (nonatomic, readonly) unsigned long long routeAvailability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (struct __CFString *)_keyForScreenRequestOrigin:(long long)arg1;

- (id)init;
- (void)airPlayRouteObserverRegistryRouteAvailabilityChanged:(id)arg1 forRouteObserver:(id)arg2;
- (void)screenDetector:(id)arg1 didDetectScreen:(id)arg2;
- (void)screenDetector:(id)arg1 didLoseScreen:(id)arg2;
- (id)_currentContent;
- (void)_cacheDisplayedContentIfNeededForUnregisteringProvider:(id)arg1;
- (void)_updateScreenContentWithShouldTryToFindAvailableScreen:(_Bool)arg1;
- (id)_findAvailableScreen;
- (_Bool)_shouldIgnoreScreen:(id)arg1;
- (void)registerContentProvider:(id)arg1;
- (void)unregisterContentProvider:(id)arg1;
- (void)registerRouteObserver:(id)arg1;
- (void)unregisterRouteObserver:(id)arg1;
- (void)notifyDidPresentAirPlayRoutesFromShareSheet;
- (void)notifyDidPresentAirPlayRoutesFromSlideshow;
- (void)_notifyWillRequestAirPlayScreenFromSource:(long long)arg1;
- (void)_recordSessionBeganWithScreen:(id)arg1;
- (void)_recordSessionEnded;
- (id)_screenAvailabilityName;
- (_Bool)pu_hasAvailableRoute;

@end
