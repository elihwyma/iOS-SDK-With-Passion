/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFAttachmentLibraryDataProvider.h>

@class NSMutableDictionary, NSString;

@interface MFMailDropAttachmentDataProvider : MFAttachmentLibraryDataProvider

{
    NSMutableDictionary *_requests;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (id)initWithLibrary:(id)arg1;
- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_defaultDownloadSessionForAttachment:(id)arg1;

@end
