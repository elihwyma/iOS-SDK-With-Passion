/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@interface _SFDownloadDispatcher : NSObject

{
    NSMapTable *_activeDownloadMap;
    NSMapTable *_pendingDownloadMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedDownloadDispatcher;

- (id)init;
- (void)_downloadDidStart:(id)arg1;
- (void)_download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_downloadDidFinish:(id)arg1;
- (void)_download:(id)arg1 didFailWithError:(id)arg2;
- (void)_downloadDidCancel:(id)arg1;
- (void)_downloadProcessDidCrash:(id)arg1;
- (void)setPendingDownload:(id)arg1 forWebView:(id)arg2;
- (id)downloadFromWKDownload:(id)arg1 userInitiatedAction:(id)arg2;
- (id)startDownloadFromWebView:(id)arg1 URL:(id)arg2;
- (id)prepareForDownloadFromWebView:(id)arg1 request:(id)arg2 MIMEType:(id)arg3 uti:(id)arg4 userInitiatedAction:(id)arg5;
- (void)registerResumedDownload:(id)arg1;

@end
