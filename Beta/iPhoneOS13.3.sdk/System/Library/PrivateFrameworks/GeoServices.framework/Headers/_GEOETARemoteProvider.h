/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _GEOETARemoteProvider : NSObject

{
    NSObject<OS_xpc_object> *_connection;
    CDUnknownBlockType _willSendRequestHandler;
    CDUnknownBlockType _finishedHandler;
    CDUnknownBlockType _networkActivityHandler;
    CDUnknownBlockType _errorHandler;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (copy, nonatomic) CDUnknownBlockType willSendRequestHandler;
@property (copy, nonatomic) CDUnknownBlockType finishedHandler;
@property (copy, nonatomic) CDUnknownBlockType networkActivityHandler;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;

+ (id)provderWithWillSendRequest:(CDUnknownBlockType)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;

@end
