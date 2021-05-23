/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSDate, NSString, PKServiceProviderPurchaseData;

@interface PKServiceProviderPurchase : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_visibleTransactionIdentifier;
    unsigned long long _state;
    NSString *_deviceIdentifier;
    NSString *_regionIdentifier;
    NSString *_serviceProviderIdentifier;
    PKServiceProviderPurchaseData *_serviceProviderData;
    NSDate *_purchaseDate;
    NSString *_signature;
    NSString *_partnerMetadata;
    NSArray *_actions;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *visibleTransactionIdentifier;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *regionIdentifier;
@property (copy, nonatomic) NSString *serviceProviderIdentifier;
@property (copy, nonatomic) PKServiceProviderPurchaseData *serviceProviderData;
@property (copy, nonatomic) NSDate *purchaseDate;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *partnerMetadata;
@property (copy, nonatomic) NSArray *actions;

+ (_Bool)supportsSecureCoding;
+ (id)purchaseWithDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToServiceProviderPurchase:(id)arg1;

@end
