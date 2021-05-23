/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICAsyncOperation.h>

@class ICSecureKeyDeliveryRequest;

@interface ICSecureKeyDeliveryRequestOperation : ICAsyncOperation

{
    ICSecureKeyDeliveryRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) ICSecureKeyDeliveryRequest *request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;

@end
