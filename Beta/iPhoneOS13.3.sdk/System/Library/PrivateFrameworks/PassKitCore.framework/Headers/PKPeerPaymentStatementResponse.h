/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString;

@interface PKPeerPaymentStatementResponse : PKPeerPaymentWebServiceResponse

{
    NSString *_emailAddress;
}

@property (copy, nonatomic, readonly) NSString *emailAddress;

- (id)initWithData:(id)arg1;

@end
