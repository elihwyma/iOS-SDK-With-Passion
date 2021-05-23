/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class PKAccount;

@interface PKAccountWebServiceAccountResponse : PKAccountWebServiceResponse

{
    PKAccount *_account;
}

@property (copy, nonatomic, readonly) PKAccount *account;

- (id)initWithData:(id)arg1;

@end
