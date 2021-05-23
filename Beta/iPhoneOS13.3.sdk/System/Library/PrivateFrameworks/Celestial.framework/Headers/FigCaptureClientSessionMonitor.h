/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigCaptureDisplayLayoutMonitor, NSArray, NSString;

@interface FigCaptureClientSessionMonitor : NSObject

{
    CDUnknownBlockType _applicationAndLayoutStateHandler;
    CDUnknownBlockType _interruptionHandler;
    struct opaqueCMSession *_session;
    CDStruct_4c969caf _clientAuditToken;
    int _pid;
    NSString *_applicationID;
    _Bool _isForThirdPartyTorch;
    NSArray *_avconferenceClientApplicationIDs;
    _Bool _clientCanInheritApplicationState;
    int _pidToInheritAppStateFrom;
    unsigned int _bksApplicationState;
    _Bool _bksApplicationStateInitialized;
    NSString *_cachedApplicationIDToInheritAppStateFrom;
    NSString *_extensionHostApplicationID;
    struct OpaqueFigSimpleMutex *_stateChangeLock;
    struct OpaqueFigSimpleMutex *_sessionLock;
    int _applicationState;
    int _layoutState;
    _Bool _layoutStateInitialized;
    id _applicationStateChangeNotificationToken;
    id _interruptionStateChangeNotificationToken;
    _Bool _invalid;
    _Bool _haveExternalCMSession;
    int _clientType;
    FigCaptureDisplayLayoutMonitor *_displayLayoutMonitor;
}

@property (nonatomic, readonly) struct opaqueCMSession *session;
@property (readonly) NSString *applicationID;
@property (readonly) int applicationState;
@property (readonly) int clientType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (void)startPrewarmingMonitorWithHandler:(CDUnknownBlockType)arg1;
+ (id)_stringForClientType:(int)arg1;
+ (id)_stringForApplicationState:(int)arg1;
+ (id)_stringForBKSApplicationState:(unsigned int)arg1;
+ (id)_stringForClientLayoutState:(int)arg1;
+ (_Bool)_isSupportedExtensionClientType:(int)arg1;
+ (int)_applicationStateForBKSApplicationState:(unsigned int)arg1 clientType:(int)arg2;
+ (int)_applicationStateForClientLayoutState:(int)arg1 clientType:(int)arg2;
+ (void)stopPrewarmingMonitor;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)loggingPrefix;
- (void)layoutMonitor:(id)arg1 didUpdateLayoutWithForegroundApps:(id)arg2 obscuredApps:(id)arg3;
- (int)observeSession:(struct opaqueCMSession *)arg1;
- (id)initWithClientAuditToken:(id)arg1 forThirdPartyTorch:(_Bool)arg2 applicationAndLayoutStateHandler:(CDUnknownBlockType)arg3 interruptionHandler:(CDUnknownBlockType)arg4;
- (id)initWithAVConferenceClientApplicationIDs:(id)arg1 applicationAndLayoutStateHandler:(CDUnknownBlockType)arg2 interruptionHandler:(CDUnknownBlockType)arg3;
- (void)_setUpApplicationInfo;
- (_Bool)_isApplicationStateMonitoringRequiredForClient;
- (_Bool)_isCMSessionInterruptionObservingRequiredForClient;
- (int)_createAndObserveCMSession;
- (_Bool)_isDisplayLayoutMonitoringRequiredForClient;
- (id)_initWithClientAuditToken:(id)arg1 forThirdPartyTorch:(_Bool)arg2 avconferenceClientApplicationIDs:(id)arg3 applicationAndLayoutStateHandler:(CDUnknownBlockType)arg4 interruptionHandler:(CDUnknownBlockType)arg5;
- (id)_resolveApplicationID;
- (void)_deregisterAndReleaseCMSession;
- (int)_registerCMSessionForObservation;
- (void)_handleCMSessionManagerNofification:(id)arg1;
- (void)_updateApplicationState;
- (void)_updateClientStateCondition:(void *)arg1 newValue:(id)arg2;
- (void)_handleApplicationStateChange:(unsigned int)arg1;
- (int)_resolveApplicationState;
- (void)_handleAudioInterruptionChange:(int)arg1;

@end
