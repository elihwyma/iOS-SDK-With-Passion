/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FBSDisplayLayoutMonitor, FBSDisplayLayoutMonitorConfiguration, NSMutableArray;

@interface FigCaptureDisplayLayoutMonitor : NSObject

{
    struct OpaqueFigSimpleMutex *_layoutObserversLock;
    NSMutableArray *_layoutObservers;
    struct OpaqueFigSimpleMutex *_appsLock;
    NSMutableArray *_fullScreenApps;
    NSMutableArray *_nonFullScreenApps;
    NSMutableArray *_obscuredApps;
    FBSDisplayLayoutMonitor *_layoutMonitor;
    FBSDisplayLayoutMonitorConfiguration *_layoutMonitorConfiguration;
}

@property (nonatomic, readonly, getter=isOnHomeScreen) _Bool onHomeScreen;
@property (nonatomic, readonly, getter=isOnLockScreen) _Bool onLockScreen;

+ (void)initialize;
+ (id)sharedDisplayLayoutMonitor;
+ (int)_openFrontBoardServicesFramework;

- (void)dealloc;
- (id)_init;
- (void)removeLayoutObserver:(id)arg1;
- (void)addLayoutObserver:(id)arg1;
- (void)_updateCurrentLayout:(id)arg1;
- (void)_updateObserversWithForegroundApps:(id)arg1 obscuredApps:(id)arg2;

@end
