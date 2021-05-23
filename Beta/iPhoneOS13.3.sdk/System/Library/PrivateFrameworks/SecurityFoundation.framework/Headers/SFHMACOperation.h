/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/SFMessageAuthenticationCodeOperation.h>

@protocol SFDigestOperation;

@interface SFHMACOperation : SFMessageAuthenticationCodeOperation

{
    id _hmacOperationInternal;
}

@property (copy, nonatomic) id <SFDigestOperation> digestOperation;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigestOperation:(id)arg1;

@end
