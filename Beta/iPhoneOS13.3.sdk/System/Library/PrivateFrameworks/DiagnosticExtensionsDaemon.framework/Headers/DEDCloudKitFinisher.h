/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class DEDBugSession, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_os_log;

@interface DEDCloudKitFinisher : NSObject

{
    DEDBugSession *_session;
    NSObject<OS_os_log> *_log;
    unsigned long long _totalUploadSize;
    NSArray *_attachmentURLs;
    NSMutableArray *_attachmentRecords;
    NSMutableArray *_attachments;
    NSMutableDictionary *_uploadedBytes;
}

@property (weak) DEDBugSession *session;
@property (retain) NSObject<OS_os_log> *log;
@property unsigned long long totalUploadSize;
@property (retain) NSArray *attachmentURLs;
@property (retain) NSMutableArray *attachmentRecords;
@property (retain) NSMutableArray *attachments;
@property (retain) NSMutableDictionary *uploadedBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)archivedClasses;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;
- (void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg1;
- (void)didCancelCollectionOnExtension:(id)arg1;
- (void)didCollectAttachmentGroup:(id)arg1;
- (void)didFinishAllCollections;
- (id)flattenDirectories:(id)arg1;
- (void)localCleanup;

@end
