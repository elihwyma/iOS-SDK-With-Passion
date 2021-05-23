/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@interface PKPeerPaymentPerformActionResponse : PKPeerPaymentWebServiceResponse

{
    _Bool _success;
    long long _status;
}

@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) long long status;

- (id)initWithData:(id)arg1;

@end
