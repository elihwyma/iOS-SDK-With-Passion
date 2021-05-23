/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICAsyncOperation.h>

@class ICStoreRequestContext, NSData;

@interface ICMachineDataOperation : ICAsyncOperation

{
    NSData *_data;
    ICStoreRequestContext *_requestContext;
    long long _protocolVersion;
    CDUnknownBlockType _completionHandler;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) ICStoreRequestContext *requestContext;
@property (nonatomic) long long protocolVersion;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

@end
