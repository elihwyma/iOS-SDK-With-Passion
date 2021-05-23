/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICAsyncOperation.h>

@class ICUserVerificationRequest;

@interface ICUserVerificationOperation : ICAsyncOperation

{
    ICUserVerificationRequest *_verificationRequest;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic, readonly) ICUserVerificationRequest *verificationRequest;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

+ (id)operationWithVerificationRequest:(id)arg1;

- (void)execute;

@end
