/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISOperation.h>

@class AVAssetResourceLoadingRequest, NSURL;

@interface SUPastisOperation : ISOperation

{
    NSURL *_certificateUrl;
    NSURL *_keyUrl;
    AVAssetResourceLoadingRequest *_loadingRequest;
}

@property (retain, nonatomic) AVAssetResourceLoadingRequest *loadingRequest;
@property (retain, nonatomic) NSURL *keyURL;
@property (retain, nonatomic) NSURL *certificateURL;

- (void)dealloc;
- (void)run;
- (id)_getURIWithError:(id *)arg1;
- (id)_getAppCertWithError:(id *)arg1;
- (id)_getCKCForSPC:(id)arg1 URI:(id)arg2 error:(id *)arg3;

@end
