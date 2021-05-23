/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface NPKProtoSetTransactionDefaultsRequest : PBRequest

{
    NSData *_defaultBillingAddresses;
    NSData *_defaultContactEmail;
    NSData *_defaultContactName;
    NSData *_defaultContactPhone;
    NSData *_defaultShippingAddress;
}

@property (nonatomic, readonly) _Bool hasDefaultShippingAddress;
@property (retain, nonatomic) NSData *defaultShippingAddress;
@property (nonatomic, readonly) _Bool hasDefaultBillingAddresses;
@property (retain, nonatomic) NSData *defaultBillingAddresses;
@property (nonatomic, readonly) _Bool hasDefaultContactEmail;
@property (retain, nonatomic) NSData *defaultContactEmail;
@property (nonatomic, readonly) _Bool hasDefaultContactPhone;
@property (retain, nonatomic) NSData *defaultContactPhone;
@property (nonatomic, readonly) _Bool hasDefaultContactName;
@property (retain, nonatomic) NSData *defaultContactName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
