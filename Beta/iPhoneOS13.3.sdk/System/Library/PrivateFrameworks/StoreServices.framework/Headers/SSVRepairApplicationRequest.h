/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSNumber, NSString;

@interface SSVRepairApplicationRequest : SSRequest

{
    long long _claimStyle;
    NSString *_bundleID;
    NSNumber *_accountDSID;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSNumber *accountDSID;
@property (nonatomic, readonly) long long claimStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3;

@end
