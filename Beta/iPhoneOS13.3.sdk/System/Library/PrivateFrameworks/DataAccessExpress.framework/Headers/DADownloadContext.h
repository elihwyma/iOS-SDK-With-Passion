/*
 Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface DADownloadContext : NSObject

{
    NSString *_attachmentUUID;
    NSString *_accountID;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic, readonly) NSString *attachmentUUID;
@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic, readonly) CDUnknownBlockType progressBlock;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionBlock;

- (void)finishedWithError:(id)arg1;
- (id)initWithAttachmentUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 downloadProgressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)updateProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2;

@end
