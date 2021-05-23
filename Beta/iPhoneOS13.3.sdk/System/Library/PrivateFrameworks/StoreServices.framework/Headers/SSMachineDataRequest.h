/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSData, NSNumber, NSString;

@interface SSMachineDataRequest : SSRequest

{
    NSNumber *_accountID;
    NSData *_actionData;
    NSString *_actionName;
    _Bool _allowsBootstrapCellularData;
    long long _protocolVersion;
    NSString *_userAgent;
    _Bool _waitsForPurchaseOperations;
}

@property (copy) NSNumber *accountIdentifier;
@property (copy) NSData *actionData;
@property (copy) NSString *actionName;
@property _Bool allowsBootstrapCellularData;
@property long long protocolVersion;
@property (copy) NSString *userAgent;
@property _Bool waitsForPurchaseOperations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithURLResponse:(id)arg1;
- (void)startWithDetailedCompletionBlock:(CDUnknownBlockType)arg1;

@end
