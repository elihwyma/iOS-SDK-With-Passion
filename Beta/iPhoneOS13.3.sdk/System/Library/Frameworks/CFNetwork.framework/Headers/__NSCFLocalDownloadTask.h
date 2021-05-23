/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFLocalSessionTask.h>

@class NSDictionary, NSObject, NSString, __NSCFLocalDownloadFile;

@protocol OS_dispatch_data;

@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask

{
    CDUnknownBlockType _fileCompletion;
    __NSCFLocalDownloadFile *_downloadFile;
    NSObject<OS_dispatch_data> *_writeBuffer;
    unsigned long long _ioSuspend;
    unsigned long long _totalWrote;
    CDUnknownBlockType _resumeCallback;
    long long _initialResumeSize;
    NSDictionary *_originalResumeInfo;
    unsigned long long _transientWriteProgress;
    CDUnknownBlockType _afterDidReportProgressOnQueue;
    CDUnknownBlockType _dataAckCompletion;
    int _seqNo;
    _Bool _canWrite;
    _Bool _suppressProgress;
    _Bool _needFinish;
    _Bool _didIssueNeedFinish;
}

@property (copy) CDUnknownBlockType fileCompletion;
@property (copy) CDUnknownBlockType dataAckCompletion;
@property (retain) __NSCFLocalDownloadFile *downloadFile;
@property (copy) CDUnknownBlockType resumeCallback;
@property (copy) CDUnknownBlockType _afterDidReportProgressOnQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_requestFromResumeDataDictionary:(id)arg1;
+ (id)_expandResumeData:(id)arg1;
+ (id)_requestFromResumeDataDictionary:(id)arg1 key:(id)arg2;

- (void)dealloc;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)_onqueue_completeInitialization;
- (id)initWithTaskGroup:(id)arg1 resumeData:(id)arg2 ident:(unsigned long long)arg3;
- (id)initWithTaskGroup:(id)arg1 request:(id)arg2 filePath:(id)arg3 ident:(unsigned long long)arg4;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithLocalSessionTask:(id)arg1 connection:(id)arg2;
- (int)openItemForPath:(id)arg1 mode:(int)arg2;
- (void)_onqueue_cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (id)explicitDownloadDirectory;
- (_Bool)setupForNewDownload:(id)arg1;
- (id)initWithTaskGroup:(id)arg1 request:(id)arg2 ident:(unsigned long long)arg3;
- (const struct __CFDictionary *)_copySocketStreamProperties;
- (void)cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)reportProgress:(unsigned long long)arg1;
- (void)_private_posixError:(int)arg1;
- (void)writeAndResume;
- (void)terminateExtractorWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)suspendExtractor;
- (id)createResumeInformation:(id)arg1;
- (void)_private_errorCompletion;
- (void)_private_fileCompletion;
- (void)checkWrite;
- (void)_supplyExtractorWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
