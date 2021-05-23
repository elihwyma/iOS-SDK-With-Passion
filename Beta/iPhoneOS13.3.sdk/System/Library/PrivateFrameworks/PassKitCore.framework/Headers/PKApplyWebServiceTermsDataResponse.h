/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKApplyWebServiceResponse.h>

@class NSData, NSString;

@interface PKApplyWebServiceTermsDataResponse : PKApplyWebServiceResponse

{
    NSData *_termsData;
    NSString *_termsDataFileName;
}

@property (retain, nonatomic) NSData *termsData;
@property (copy, nonatomic) NSString *termsDataFileName;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end
