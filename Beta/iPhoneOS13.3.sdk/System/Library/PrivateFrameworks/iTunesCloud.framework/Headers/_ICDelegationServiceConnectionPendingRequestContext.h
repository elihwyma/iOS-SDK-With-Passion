/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICPBDGSRequest;

@interface _ICDelegationServiceConnectionPendingRequestContext : NSObject

{
    ICPBDGSRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (nonatomic, readonly) ICPBDGSRequest *request;
@property (copy, nonatomic, readonly) CDUnknownBlockType responseHandler;

- (id)initWithRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;

@end
