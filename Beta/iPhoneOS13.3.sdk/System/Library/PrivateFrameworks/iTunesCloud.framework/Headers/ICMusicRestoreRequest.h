/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICMediaRedownloadResponse, ICMusicRestoreRequestParameters, ICStoreRequestContext, ICStoreURLRequest;

@interface ICMusicRestoreRequest : ICRequestOperation

{
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
    ICMediaRedownloadResponse *_response;
    ICMusicRestoreRequestParameters *_requestParameters;
}

- (void)cancel;
- (void)execute;
- (id)_serializedBodyDataWithAccountID:(id)arg1;
- (id)initWithRequestContext:(id)arg1 parameters:(id)arg2;
- (void)performRestoreRequestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
