/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSString;

@interface PKAccountWebserviceInstallmentBindResponse : PKAccountWebServiceResponse

{
    NSString *_bindToken;
}

@property (copy, nonatomic, readonly) NSString *bindToken;

- (id)initWithData:(id)arg1;

@end
