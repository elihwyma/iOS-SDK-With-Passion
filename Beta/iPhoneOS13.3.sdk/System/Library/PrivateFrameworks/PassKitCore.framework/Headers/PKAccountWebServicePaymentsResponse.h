/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray;

@interface PKAccountWebServicePaymentsResponse : PKAccountWebServiceResponse

{
    NSArray *_payments;
}

@property (copy, nonatomic, readonly) NSArray *payments;

- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 account:(id)arg2;

@end
