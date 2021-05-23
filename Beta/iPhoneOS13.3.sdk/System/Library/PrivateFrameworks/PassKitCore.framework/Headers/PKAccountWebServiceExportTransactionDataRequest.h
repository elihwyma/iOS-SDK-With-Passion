/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSDate, NSString, NSTimeZone, NSURL;

@interface PKAccountWebServiceExportTransactionDataRequest : PKAccountWebServiceRequest

{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    NSString *_fileFormat;
    NSDate *_beginDate;
    NSDate *_endDate;
    NSTimeZone *_productTimeZone;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *fileFormat;
@property (copy, nonatomic) NSDate *beginDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSTimeZone *productTimeZone;

- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end
