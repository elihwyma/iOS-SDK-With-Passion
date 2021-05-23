/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, NSTimer, NSURL, NSURLRequest, NSURLResponse, NSUUID, SFDownloadFile, WBSFluidProgressController, WBSFluidProgressState, WKWebView, _SFQuickLookDocument, _WKDownload, _WKUserInitiatedAction;

@protocol _SFDownloadDelegate, _SFDownloadPlaceholderImporter;

@interface _SFDownload : NSObject

{
    _WKDownload *_download;
    _Bool _wasCanceled;
    WBSFluidProgressState *_fluidProgressState;
    double _timeLastProgressNotificationWasSent;
    long long _cachedFileType;
    NSTimer *_reportUpdatedProgressTimer;
    WKWebView *_originatingWebView;
    NSData *_resumeData;
    SFDownloadFile *_placeholderFile;
    SFDownloadFile *_completedFile;
    NSString *_suggestedFilename;
    NSURLRequest *_request;
    _Bool _explicitlySaved;
    _Bool _suppressesPrompt;
    NSURL *_sourceURL;
    NSString *_fileDownloadPath;
    _WKUserInitiatedAction *_userInitiatedAction;
    NSString *_uti;
    NSString *_mimeType;
    NSURLResponse *_response;
    _SFQuickLookDocument *_quickLookDocument;
    NSUUID *_identifier;
    long long _bytesExpected;
    unsigned long long _bytesLoaded;
    long long _state;
    NSDate *_dateAdded;
    NSDate *_dateFinished;
    WBSFluidProgressController *_fluidProgressController;
    id <_SFDownloadDelegate> _delegate;
    id <_SFDownloadPlaceholderImporter> _placeholderImporter;
}

@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic, readonly) NSString *fileDownloadPath;
@property (nonatomic, readonly) long long fileType;
@property (nonatomic, readonly) _WKUserInitiatedAction *userInitiatedAction;
@property (copy, nonatomic, readonly) NSString *uti;
@property (copy, nonatomic, readonly) NSString *mimeType;
@property (nonatomic, readonly) NSURLResponse *response;
@property (retain, nonatomic) _SFQuickLookDocument *quickLookDocument;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) _WKDownload *wkDownload;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSString *filenameWithoutExtension;
@property (nonatomic, readonly) NSURL *completedFileURL;
@property (nonatomic) _Bool explicitlySaved;
@property (nonatomic) _Bool suppressesPrompt;
@property (nonatomic, readonly) long long bytesExpected;
@property (nonatomic, readonly) unsigned long long bytesLoaded;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, getter=isIdle) _Bool idle;
@property (nonatomic, readonly) NSDate *dateAdded;
@property (nonatomic, readonly) NSDate *dateFinished;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) _Bool canResume;
@property (nonatomic, readonly) _Bool canReveal;
@property (weak, nonatomic) WBSFluidProgressController *fluidProgressController;
@property (weak, nonatomic) id <_SFDownloadDelegate> delegate;
@property (weak, nonatomic) id <_SFDownloadPlaceholderImporter> placeholderImporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)provisionalDownloadWithMIMEType:(id)arg1 request:(id)arg2 response:(id)arg3 filename:(id)arg4 uti:(id)arg5 userInitiatedAction:(id)arg6;
+ (id)downloadDestinationPathWithFilename:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (_Bool)removeFromDisk;
- (double)estimatedProgress;
- (void)_downloadDidStart:(id)arg1;
- (void)_download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_downloadDidFinish:(id)arg1;
- (void)_download:(id)arg1 didFailWithError:(id)arg2;
- (void)_downloadDidCancel:(id)arg1;
- (void)_downloadProcessDidCrash:(id)arg1;
- (void)downloadFileContentsDidChange:(id)arg1;
- (void)downloadFileWillBeDeleted:(id)arg1;
- (void)downloadFileDidChangeURL:(id)arg1;
- (id)expectedOrCurrentURL;
- (_Bool)createFluidProgressState;
- (void)clearFluidProgressState;
- (id)progressState;
- (_Bool)hasFailedURL;
- (id)initWithDictionaryRepresentation:(id)arg1 didUpdateRepresentation:(_Bool *)arg2;
- (void)removeDataAndPlaceholderFromDisk;
- (void)_reportUpdatedProgressTimerFired:(id)arg1;
- (void)_reportUpdatedProgressNow;
- (void)_cancelReportUpdatedProgressTimer;
- (id)completedFileURL:(_Bool *)arg1;
- (id)_createResumeData;
- (void)_validateSandboxAccessToURL:(id)arg1;
- (void)_didImportPlaceholderAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_notifyDelegateOfFinishedDownload;
- (void)_didImportFileAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_didUpdateBytesLoaded;
- (void)_reportUpdatedProgressSoon;
- (void)_continueAfterDownloadConfirmation:(_Bool)arg1 destinationCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_continueAfterDecidingFileDownloadPath:(CDUnknownBlockType)arg1;
- (void)_importPlaceholderIfNeeded:(CDUnknownBlockType)arg1;
- (void)_importCompleteDownloadIfNeeded;
- (void)resumeInProcessPool:(id)arg1;
- (void)reveal;

@end
