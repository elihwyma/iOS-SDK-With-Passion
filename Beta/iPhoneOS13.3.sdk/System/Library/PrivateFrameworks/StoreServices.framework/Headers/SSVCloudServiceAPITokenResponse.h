/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSError, NSString;

@interface SSVCloudServiceAPITokenResponse : NSObject

{
    NSString *_apiToken;
    NSError *_error;
}

@property (copy, nonatomic) NSString *apiToken;
@property (copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithToken:(id)arg1 error:(id)arg2;

@end
