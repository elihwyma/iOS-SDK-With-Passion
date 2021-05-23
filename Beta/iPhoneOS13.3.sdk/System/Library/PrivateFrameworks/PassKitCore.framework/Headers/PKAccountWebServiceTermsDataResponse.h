/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSData, NSString;

@interface PKAccountWebServiceTermsDataResponse : PKAccountWebServiceResponse

{
    NSData *_termsData;
    NSString *_termsDataFileName;
}

@property (retain, nonatomic) NSData *termsData;
@property (copy, nonatomic) NSString *termsDataFileName;

- (id)initWithData:(id)arg1;

@end
