/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <DiagnosticExtensionsDaemon/DEDAttachmentItem.h>

@interface DEDRadarUploadItem : DEDAttachmentItem

{
    _Bool _isUploaded;
    unsigned long long _taskIdentifier;
    long long _totalBytesSent;
    long long _totalBytesExpectedToSend;
}

@property (nonatomic) unsigned long long taskIdentifier;
@property (nonatomic) long long totalBytesSent;
@property (nonatomic) long long totalBytesExpectedToSend;
@property (nonatomic) _Bool isUploaded;

- (id)description;
- (id)initWithUploadTask:(id)arg1 andAttachment:(id)arg2;

@end
