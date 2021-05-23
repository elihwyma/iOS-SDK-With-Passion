/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICMediaAVAssetDownloadOptions, ICStoreRequestContext, ICURLRequest, ICURLResponse, ICURLSession, NSData, NSURL;

@interface ICMediaAssetDownloadRequest : ICRequestOperation

{
    ICStoreRequestContext *_requestContext;
    NSURL *_assetURL;
    ICMediaAVAssetDownloadOptions *_downloadOptions;
    ICURLSession *_downloadSession;
    ICURLRequest *_request;
    ICURLResponse *_response;
    _Bool _allowsCellularData;
    _Bool _allowsCellularFallback;
    _Bool _discretionary;
    _Bool _requiresPower;
    NSURL *_destinationURL;
    NSData *_resumeData;
}

@property (copy, nonatomic) NSURL *destinationURL;
@property (nonatomic) _Bool allowsCellularData;
@property (nonatomic) _Bool allowsCellularFallback;
@property (nonatomic, getter=isDiscretionary) _Bool discretionary;
@property (nonatomic) _Bool requiresPower;
@property (copy, nonatomic) NSData *resumeData;

- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (id)_sessionIdentifier;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 assetURL:(id)arg2 avAssetDownloadOptions:(id)arg3 resumeData:(id)arg4;

@end
