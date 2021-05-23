/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreRequestContext, ICUserVerificationContext;

@interface ICUserVerificationRequest : NSObject <Swift>

{
    long long _qualityOfService;
    ICStoreRequestContext *_storeRequestContext;
    ICUserVerificationContext *_verificationContext;
}

@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (copy, nonatomic, readonly) ICUserVerificationContext *verificationContext;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithVerificationContext:(id)arg1;

@end
