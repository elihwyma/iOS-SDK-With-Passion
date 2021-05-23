/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class DEDBugSession, DEDBugSessionConfiguration, DEDSeedingClient, NSMutableDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_source, OS_os_log, OS_os_transaction;

@interface DEDSeedingFinisher : NSObject

{
    NSObject<OS_dispatch_source> *_timerSource;
    DEDBugSessionConfiguration *_config;
    NSMutableSet *_uploads;
    unsigned long long _totalUploadSize;
    NSObject<OS_os_log> *_log;
    DEDBugSession *_session;
    NSObject<OS_os_transaction> *_transaction;
    DEDSeedingClient *_client;
    NSMutableDictionary *_promises;
}

@property (retain) DEDBugSessionConfiguration *config;
@property (retain) NSMutableSet *uploads;
@property unsigned long long totalUploadSize;
@property (retain) NSObject<OS_os_log> *log;
@property (weak) DEDBugSession *session;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property (retain) DEDSeedingClient *client;
@property (retain) NSMutableDictionary *promises;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)archivedClasses;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)save;
- (void)cleanup;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;
- (void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg1;
- (void)didCancelCollectionOnExtension:(id)arg1;
- (void)didCollectAttachmentGroup:(id)arg1;
- (void)didAdoptAttachmentGroup:(id)arg1;
- (id)attachmentHandler;
- (id)prepareSessionDirectoryForSubmission:(id)arg1;
- (void)startProgressNotifier;
- (id)uploadItemForTask:(id)arg1;
- (void)updateSessionUploadProgress;
- (_Bool)uploadsAreComplete;
- (id)prepareUpload:(id)arg1 forSubmissionWithSession:(id)arg2 metadata:(id)arg3;
- (id)archiveItemsInDirectory:(id)arg1;
- (void)uploadTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)uploadTask:(id)arg1 didSendBytes:(long long)arg2;

@end
