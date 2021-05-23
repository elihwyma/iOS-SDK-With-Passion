/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class DEDBugSession, NSArray, NSMutableSet, NSString;

@protocol OS_os_log;

@interface DEDRadarFinisher : NSObject

{
    float _percentComplete;
    DEDBugSession *_session;
    NSObject<OS_os_log> *_log;
    NSArray *_attachments;
    NSMutableSet *_uploadItems;
}

@property (weak) DEDBugSession *session;
@property (retain) NSObject<OS_os_log> *log;
@property float percentComplete;
@property (retain) NSArray *attachments;
@property (retain) NSMutableSet *uploadItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)archivedClasses;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (_Bool)isWatch;
- (id)getUploadItemForTask:(id)arg1;
- (_Bool)allUploadsComplete;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;

@end
