/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSHashTable, NSMapTable;

@protocol OS_dispatch_queue;

@interface FigCaptureSessionObservatory : NSObject

{
    NSMapTable *_captureSessionsStorage;
    NSHashTable *_registeredObservers;
    NSObject<OS_dispatch_queue> *_queue;
    long long _lastRunningIdentifier;
}

+ (void)initialize;
+ (id)sharedObservatory;

- (id)init;
- (void)dealloc;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)captureSessionWasCreated:(struct OpaqueFigCaptureSession *)arg1;
- (void)_registerObserver:(id)arg1;
- (void)_setRunning:(_Bool)arg1 forCaptureSession:(struct OpaqueFigCaptureSession *)arg2;

@end
