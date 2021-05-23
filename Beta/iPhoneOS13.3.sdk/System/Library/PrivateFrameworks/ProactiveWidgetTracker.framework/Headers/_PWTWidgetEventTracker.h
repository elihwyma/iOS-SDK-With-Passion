/*
 Image: /System/Library/PrivateFrameworks/ProactiveWidgetTracker.framework/ProactiveWidgetTracker
 */

#import <Foundation/NSObject.h>

@class NSString, PETDistributionEventTracker, PETGoalConversionEventTracker, PETScalarEventTracker;

@protocol OS_dispatch_queue;

@interface _PWTWidgetEventTracker : NSObject

{
    NSString *_identifier;
    PETScalarEventTracker *_resizeTracker;
    PETGoalConversionEventTracker *_conversionTracker;
    PETScalarEventTracker *_updateTracker;
    PETDistributionEventTracker *_screenLingerTracker;
    PETScalarEventTracker *_foregroundingTracker;
    _Bool _hasReceivedActiveDisplayModeChangeNotificationOnce;
    _Bool _isCurrentlyVisible;
    _Bool _willBecomeVisible;
    _Bool _didBecomeVisibleWhileLocked;
    _Bool _widgetIsForeground;
    _Bool _widgetWasEverForeground;
    long long _activeDisplayMode;
    double _lastAppearTime;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

@property (nonatomic, readonly) NSString *identifier;

- (id)initWithIdentifier:(id)arg1;
- (void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(struct CGSize)arg2;
- (void)widgetDidBecomeForeground:(_Bool)arg1;
- (void)widgetWillAppear;
- (void)widgetDidAppear;
- (void)widgetWillDisappear;
- (void)widgetDidDisappear;
- (void)widgetPerformedUpdateWithResult:(unsigned long long)arg1;
- (void)userEngagedWithWidget;

@end
