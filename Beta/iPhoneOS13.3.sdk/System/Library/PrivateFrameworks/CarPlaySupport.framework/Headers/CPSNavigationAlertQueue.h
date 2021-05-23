/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <Foundation/NSObject.h>

@class CPNavigationAlert, CPSApplicationStateMonitor, CPSNavigationAlertView, NSString, NSTimer;

@protocol CPSNavigationAlertQueueDelegate, CPTemplateDelegate;

@interface CPSNavigationAlertQueue : NSObject

{
    id <CPSNavigationAlertQueueDelegate> _delegate;
    CPNavigationAlert *_currentAlert;
    CPSNavigationAlertView *_currentAlertView;
    NSTimer *_alertTimer;
    id <CPTemplateDelegate> _templateDelegate;
    CPSApplicationStateMonitor *_applicationStateMonitor;
}

@property (retain, nonatomic) NSTimer *alertTimer;
@property (weak, nonatomic) id <CPTemplateDelegate> templateDelegate;
@property (weak, nonatomic) CPSApplicationStateMonitor *applicationStateMonitor;
@property (weak, nonatomic, readonly) id <CPSNavigationAlertQueueDelegate> delegate;
@property (nonatomic, readonly) CPNavigationAlert *currentAlert;
@property (nonatomic, readonly) CPSNavigationAlertView *currentAlertView;
@property (nonatomic, readonly) _Bool canDisplayAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didSelectButton:(id)arg1;
- (void)applicationStateMonitor:(id)arg1 didBecomeActive:(_Bool)arg2;
- (void)beginAnimatingAlertIfPossible;
- (_Bool)_canBeginAnimatingAlert;
- (void)_startAlertAnimations;
- (void)_visibleAlertTimerFired:(id)arg1;
- (void)dismissCurrentNavigationAlertAnimated:(_Bool)arg1 context:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1 applicationStateMonitor:(id)arg2;
- (void)prepareNavigationAlert:(id)arg1 templateDelegate:(id)arg2 animated:(_Bool)arg3;

@end
