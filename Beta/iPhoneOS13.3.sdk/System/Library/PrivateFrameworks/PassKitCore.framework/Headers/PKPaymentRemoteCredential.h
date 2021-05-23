/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentCredential.h>

@class NSArray, NSString, NSURL, PKPaymentPass;

@interface PKPaymentRemoteCredential : PKPaymentCredential

{
    NSString *_identifier;
    long long _status;
    NSURL *_passURL;
    NSArray *_summaryMetadata;
    NSArray *_metadata;
    NSString *_summaryMetadataDescription;
    NSString *_statusDescription;
    NSString *_ownershipTokenIdentifier;
    PKPaymentPass *_paymentPass;
    unsigned long long _rank;
    NSString *_productIdentifier;
    NSString *_serialNumber;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSURL *passURL;
@property (copy, nonatomic, readonly) NSArray *summaryMetadata;
@property (copy, nonatomic, readonly) NSArray *metadata;
@property (copy, nonatomic, readonly) NSString *summaryMetadataDescription;
@property (copy, nonatomic, readonly) NSString *statusDescription;
@property (copy, nonatomic, readonly) NSString *ownershipTokenIdentifier;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (nonatomic) unsigned long long rank;
@property (nonatomic, readonly) NSString *productIdentifier;
@property (copy, nonatomic) NSString *serialNumber;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (_Bool)_isEqualToCredential:(id)arg1;
- (id)initWithIdentifier:(id)arg1 status:(long long)arg2 credentialType:(long long)arg3 passURL:(id)arg4;

@end
