/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSString;

@interface SSVApplicationCapabilitiesRequest : SSRequest

{
    NSString *_bundleID;
}

@property (copy, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithCapabilitiesResponseBlock:(CDUnknownBlockType)arg1;

@end
