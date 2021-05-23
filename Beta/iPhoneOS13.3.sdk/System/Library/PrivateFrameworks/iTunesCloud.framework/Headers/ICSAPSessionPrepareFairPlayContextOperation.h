/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICAsyncOperation.h>

@class ICSAPSession;

@interface ICSAPSessionPrepareFairPlayContextOperation : ICAsyncOperation

{
    ICSAPSession *_sapSession;
    CDUnknownBlockType _responseHandler;
}

@property (retain, nonatomic) ICSAPSession *sapSession;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;
- (void)_exchangeDataWithSAPContext:(id)arg1 requestContext:(id)arg2 setupURL:(id)arg3 responseData:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
