/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSError, SSVPlaybackLeaseResponse;

@interface SSVPlaybackLeaseCallback : NSObject

{
    CDUnknownBlockType _block;
    SSVPlaybackLeaseResponse *_response;
    NSError *_error;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (retain, nonatomic) SSVPlaybackLeaseResponse *response;
@property (retain, nonatomic) NSError *error;

@end
