/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, SDRDiagnosticReporter;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SystemSettingsRelay : NSObject

{
    struct __CTServerConnection *_serverConnection;
    _Bool _wifiEnabled;
    _Bool _airplaneModeSwitchEnabled;
    _Bool _cellDataSwitchEnabled;
    _Bool _rnfEnabled;
    _Bool _noBackhaulEnabled;
    _Bool _autoBugCaptureEnabled;
    _Bool _autoFeedbackAssistantEnable;
    _Bool _autoBugCaptureAvailable;
    _Bool _registeredForAutoBugCaptureChangeNotifications;
    NSDictionary *_autoBugCaptureConfiguration;
    SDRDiagnosticReporter *_collectorClient;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSDictionary *autoBugCaptureConfiguration;
@property (retain, nonatomic) SDRDiagnosticReporter *collectorClient;
@property (nonatomic) _Bool registeredForAutoBugCaptureChangeNotifications;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) _Bool wifiEnabled;
@property (readonly) _Bool airplaneModeSwitchEnabled;
@property (readonly) _Bool cellDataSwitchEnabled;
@property (readonly) _Bool rnfEnabled;
@property (readonly) _Bool noBackhaulEnabled;
@property (readonly) _Bool autoBugCaptureEnabled;
@property (readonly) _Bool autoFeedbackAssistantEnable;
@property (readonly) _Bool autoBugCaptureAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultRelay;

- (id)init;
- (void)dealloc;
- (void)registerForAutoBugCaptureChangeNotifications;
- (void)ctServerConnectionNotification:(struct __CFString *)arg1 notificationInfo:(struct __CFDictionary *)arg2;
- (void)_setAirplaneModeSwitchEnabled:(_Bool)arg1;
- (void)_setWifiEnabled:(_Bool)arg1;
- (void)_setCellDataSwitchEnabled:(_Bool)arg1;
- (void)_setRnfEnabled:(_Bool)arg1;
- (void)_setNoBackhaulEnabled:(_Bool)arg1;
- (void)_setAutoBugCaptureEnabled:(_Bool)arg1;
- (void)_setAutoBugCaptureAvailable:(_Bool)arg1;
- (void)_setAutoFeedbackAssistantEnable:(_Bool)arg1;

@end
