/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface PKServiceProviderOrder : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_itemDescription;
    NSString *_serviceProviderIdentifier;
    NSDictionary *_serviceProviderData;
    unsigned long long _paymentInstrumentType;
    NSData *_appletValue;
}

@property (copy, nonatomic) NSDictionary *serviceProviderData;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *itemDescription;
@property (copy, nonatomic) NSString *serviceProviderIdentifier;
@property (nonatomic) unsigned long long paymentInstrumentType;
@property (copy, nonatomic) NSData *appletValue;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)_itemDictionary;
- (id)_paymentInstrumentDictionary;

@end
