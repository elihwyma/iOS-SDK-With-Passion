/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSNumber, NSString;

@interface PKPeerPaymentWebServiceBadRequestResponse : PKPeerPaymentWebServiceResponse

{
    NSNumber *_errorCode;
    NSString *_serverDebugDescription;
}

@property (copy, nonatomic, readonly) NSNumber *errorCode;
@property (copy, nonatomic, readonly) NSString *serverDebugDescription;

- (id)initWithData:(id)arg1;

@end
