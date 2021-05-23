/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class DEDConfiguration, DEDController, DEDDiagnosticCollector, NSOperationQueue, NSString;

@protocol OS_dispatch_queue, OS_os_log;

@interface DEDDaemon : NSObject

{
    _Bool _embeddedInApp;
    NSObject<OS_os_log> *_log;
    DEDConfiguration *_config;
    NSOperationQueue *_backgroundOpQueue;
    NSOperationQueue *_userInitiatedOpQueue;
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    DEDDiagnosticCollector *__diagnosticCollector;
    DEDController *_controller;
}

@property (retain) NSObject<OS_os_log> *log;
@property (retain) DEDConfiguration *config;
@property (retain) NSOperationQueue *backgroundOpQueue;
@property (retain) NSOperationQueue *userInitiatedOpQueue;
@property _Bool embeddedInApp;
@property (retain) NSObject<OS_dispatch_queue> *diskAccessQueue;
@property (retain) DEDDiagnosticCollector *_diagnosticCollector;
@property (retain) DEDController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)start;
- (long long)transportType;
- (id)_controller;
- (void)cancelSession:(id)arg1;
- (void)pingSession:(id)arg1;
- (void)listAvailableExtensionsForSession:(id)arg1;
- (void)getSessionStatusWithSession:(id)arg1;
- (void)syncSessionStatusWithSession:(id)arg1;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;
- (void)scheduleNotificationForSession:(id)arg1;
- (void)cancelNotificationForSession:(id)arg1;
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;
- (void)commitSession:(id)arg1;
- (id)attachmentHandler;
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
- (void)configureForEmbedded:(_Bool)arg1;
- (id)diagnosticCollector;
- (_Bool)observesOperations;
- (void)_logOperations;
- (void)_getSessionStatusWithSession:(id)arg1;
- (void)_syncSessionStatusWithSession:(id)arg1 withIdentifiers:(_Bool)arg2;
- (void)_streamOperationStatus;
- (id)_blockOnFakeSysidagnoseWithIdentifer:(id)arg1 withBugSession:(id)arg2;

@end
