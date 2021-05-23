/*
 Image: /System/Library/PrivateFrameworks/HealthDiagnosticExtensionCore.framework/HealthDiagnosticExtensionCore
 */

#import <DEExtensionProvider.h>

@class NSMutableString, NSObject, NSURL;

@protocol OS_dispatch_queue;

@interface HDDiagnosticExtension : DEExtensionProvider

{
    double _captureStartTime;
    int _contentProtectionNotifyToken;
    NSObject<OS_dispatch_queue> *_logQueue;
    _Bool _allowsSensitiveAttachments;
    NSURL *_temporaryDirectoryURL;
    NSMutableString *_collectionLog;
}

@property (nonatomic, readonly) _Bool allowsSensitiveAttachments;
@property (retain, nonatomic) NSMutableString *collectionLog;
@property (copy, nonatomic, readonly) NSURL *temporaryDirectoryURL;

- (id)init;
- (id)attachmentsForParameters:(id)arg1;
- (void)_log:(id)arg1;
- (id)_generateTemporaryAttachmentDirectory;
- (void)_beginMonitoringForContentProtectionStatus;
- (void)_endMonitoringForContentProtectionStatus;
- (_Bool)_captureLog;
- (id)_currentProtectionStateString;
- (void)_logQueue_log:(id)arg1 timestamp:(double)arg2;
- (void)diagnosticOperation:(id)arg1 logMessage:(id)arg2;

@end
