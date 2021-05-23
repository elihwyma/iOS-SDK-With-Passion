/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPFetcher.h>

@class AVURLAsset, NSMutableData, NSString, NSURL, NSURLSession;

__attribute__((visibility("hidden")))
@interface LPMediaAssetFetcher : LPFetcher

{
    CDUnknownBlockType _completionHandler;
    AVURLAsset *_asset;
    _Bool _hasAudio;
    NSString *_MIMEType;
    NSURLSession *_session;
    NSMutableData *_receivedData;
    NSURL *_URL;
}

@property (retain, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_resolveVideo;
- (void)_completedWithVideo:(id)arg1;
- (id)videoProperties;
- (id)audioProperties;
- (void)_completedWithAudio:(id)arg1;
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
