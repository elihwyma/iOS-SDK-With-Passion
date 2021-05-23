/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreRequestContext, NSString;

@interface ICRadioLikeRequest : NSObject <Swift>

{
    long long _storeAdamID;
    long long _likeState;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationStringID;
    long long _qualityOfService;
    ICStoreRequestContext *_requestContext;
}

@property (nonatomic) long long storeAdamID;
@property (nonatomic) long long likeState;
@property (copy, nonatomic) NSString *stationHash;
@property (nonatomic) long long stationID;
@property (copy, nonatomic) NSString *stationStringID;
@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) ICStoreRequestContext *requestContext;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1;

@end
