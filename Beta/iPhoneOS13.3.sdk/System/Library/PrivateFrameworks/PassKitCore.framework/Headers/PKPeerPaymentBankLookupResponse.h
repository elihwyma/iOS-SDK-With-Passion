/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString;

@interface PKPeerPaymentBankLookupResponse : PKPeerPaymentWebServiceResponse

{
    _Bool _success;
    NSString *_displayName;
}

@property (nonatomic, readonly) _Bool success;
@property (copy, nonatomic, readonly) NSString *displayName;

- (id)initWithData:(id)arg1;

@end
