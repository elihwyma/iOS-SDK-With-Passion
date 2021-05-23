/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreRequestContext, NSData, NSString;

@interface ICAuthorizeMachineRequest : NSObject <Swift>

{
    NSString *_keybagPath;
    long long _qualityOfService;
    NSString *_reason;
    ICStoreRequestContext *_requestContext;
    NSData *_tokenData;
}

@property (copy, nonatomic) NSString *keybagPath;
@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) NSData *tokenData;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1;

@end
