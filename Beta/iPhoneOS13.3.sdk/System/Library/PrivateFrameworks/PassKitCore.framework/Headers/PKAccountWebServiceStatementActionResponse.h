/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSData, NSString;

@interface PKAccountWebServiceStatementActionResponse : PKAccountWebServiceResponse

{
    NSData *_statementPDFData;
    NSString *_statementDataFilename;
    NSString *_statementDataHash;
}

@property (copy, nonatomic, readonly) NSData *statementPDFData;
@property (copy, nonatomic, readonly) NSString *statementDataFilename;
@property (copy, nonatomic, readonly) NSString *statementDataHash;

- (id)initWithData:(id)arg1;

@end
