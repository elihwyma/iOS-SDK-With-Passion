/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreRequestContext, NSData, NSString;

@interface ICSuzeLeaseRequest : NSObject <Swift>

{
    NSData *_clientData;
    NSString *_leaseID;
    long long _mediaType;
    long long _qualityOfService;
    ICStoreRequestContext *_requestContext;
    long long _requestType;
}

@property (copy, nonatomic, readonly) NSData *clientData;
@property (copy, nonatomic, readonly) NSString *leaseID;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic, readonly) ICStoreRequestContext *requestContext;
@property (nonatomic, readonly) long long requestType;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 requestType:(long long)arg2 leaseID:(id)arg3 mediaType:(long long)arg4 clientData:(id)arg5;

@end
