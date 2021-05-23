/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreRequestContext;

@interface ICSuzeLeaseSessionConfiguration : NSObject <Swift>

{
    id _leaseID;
    long long _mediaType;
    ICStoreRequestContext *_requestContext;
}

@property (nonatomic, readonly) id leaseID;
@property (nonatomic, readonly) long long mediaType;
@property (copy, nonatomic, readonly) ICStoreRequestContext *requestContext;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestContext:(id)arg1 leaseID:(id)arg2 mediaType:(long long)arg3;

@end
