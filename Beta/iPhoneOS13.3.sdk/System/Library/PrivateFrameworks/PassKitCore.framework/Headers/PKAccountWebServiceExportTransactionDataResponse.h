/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSData, NSString;

@interface PKAccountWebServiceExportTransactionDataResponse : PKAccountWebServiceResponse

{
    NSData *_transactionData;
    NSString *_transactionDataFilename;
    NSString *_transactionDataHash;
}

@property (copy, nonatomic, readonly) NSData *transactionData;
@property (copy, nonatomic, readonly) NSString *transactionDataFilename;
@property (copy, nonatomic, readonly) NSString *transactionDataHash;

- (id)initWithData:(id)arg1;

@end
