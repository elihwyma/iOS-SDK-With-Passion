/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICAsyncOperation.h>

@class ICDelegationPlayInfoRequest, ICStoreRequestContext;

@interface ICDelegationPlayInfoRequestOperation : ICAsyncOperation

{
    ICDelegationPlayInfoRequestOperation *_strongSelf;
    ICDelegationPlayInfoRequest *_playInfoRequest;
    ICStoreRequestContext *_storeRequestContext;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) ICDelegationPlayInfoRequest *playInfoRequest;
@property (retain, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;
- (void)finishWithError:(id)arg1;
- (void)_finishWithResult:(_Bool)arg1 tokens:(id)arg2 error:(id)arg3;
- (void)finishWithResponse:(id)arg1 requestDate:(id)arg2 error:(id)arg3;

@end
