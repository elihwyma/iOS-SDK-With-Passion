/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, PKAccountPaymentFundingDetails;

@interface PKAccountPaymentFundingSource : NSObject <Swift>

{
    NSString *_identifier;
    long long _type;
    NSString *_accountSuffix;
    PKAccountPaymentFundingDetails *_fundingDetails;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *accountSuffix;
@property (copy, nonatomic) PKAccountPaymentFundingDetails *fundingDetails;

+ (_Bool)supportsSecureCoding;
+ (Class)fundingDetailsClassForFundingSourceType:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)jsonDictionaryRepresentation;
- (id)jsonString;
- (id)bankAccountRepresentation;
- (id)hashComponentWithCertificatesResponse:(id)arg1;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1;
- (id)displayDescription;

@end
