/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSString;

@interface SSVCloudServiceAPITokenRequest : SSRequest

{
    NSString *_clientToken;
}

@property (copy, nonatomic, readonly) NSString *clientToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithClientToken:(id)arg1;

@end
