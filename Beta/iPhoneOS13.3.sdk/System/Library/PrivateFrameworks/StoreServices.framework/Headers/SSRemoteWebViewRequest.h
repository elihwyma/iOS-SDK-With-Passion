/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSString;

@interface SSRemoteWebViewRequest : SSRequest

{
    NSString *_referrer;
    NSString *_URLString;
}

@property (retain, nonatomic) NSString *referrer;
@property (retain, nonatomic) NSString *URLString;

- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;

@end
