/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest, NSString;

@interface ICSongDownloadDoneRequest : ICRequestOperation

{
    ICStoreRequestContext *_requestContext;
    NSString *_downloadIdentifier;
    unsigned long long _songID;
    ICStoreURLRequest *_storeURLRequest;
}

- (void)cancel;
- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 downloadIdentifier:(id)arg2 songID:(unsigned long long)arg3;

@end
