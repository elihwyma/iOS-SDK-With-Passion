/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, PKPaymentRequest;

@interface PKPaymentRequestValidator : NSObject

{
    PKPaymentRequest *_request;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)validatorWithObject:(id)arg1;
+ (Class)validatedClass;

- (id)initWithPaymentRequest:(id)arg1;
- (_Bool)isValidWithError:(id *)arg1;
- (_Bool)isValidWithAPIType:(unsigned long long)arg1 withError:(id *)arg2;
- (_Bool)_checkTotal:(id)arg1 withAPIType:(unsigned long long)arg2 error:(id *)arg3;

@end
