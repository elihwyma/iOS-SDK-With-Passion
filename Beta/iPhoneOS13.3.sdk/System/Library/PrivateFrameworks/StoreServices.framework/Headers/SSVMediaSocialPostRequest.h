/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSString, SSVMediaSocialPostDescription;

@interface SSVMediaSocialPostRequest : SSRequest

{
    SSVMediaSocialPostDescription *_postDescription;
}

@property (nonatomic, readonly) SSVMediaSocialPostDescription *postDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithPostDescription:(id)arg1;

@end
