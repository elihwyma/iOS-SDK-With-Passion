/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBCodable.h>

@class NSMutableArray, NSString;

@interface PKProtobufPaymentClientUpdate : PBCodable

{
    NSMutableArray *_paymentSummaryItems;
    NSString *_remotePaymentRequestIdentifier;
    NSString *_selectedAID;
    NSMutableArray *_shippingMethods;
    unsigned int _status;
    CDStruct_47fe53f2 _has;
}

@property (nonatomic, readonly) _Bool hasRemotePaymentRequestIdentifier;
@property (retain, nonatomic) NSString *remotePaymentRequestIdentifier;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSMutableArray *paymentSummaryItems;
@property (retain, nonatomic) NSMutableArray *shippingMethods;
@property (nonatomic, readonly) _Bool hasSelectedAID;
@property (retain, nonatomic) NSString *selectedAID;

+ (Class)paymentSummaryItemsType;
+ (Class)shippingMethodsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addShippingMethods:(id)arg1;
- (void)addPaymentSummaryItems:(id)arg1;
- (unsigned long long)paymentSummaryItemsCount;
- (void)clearPaymentSummaryItems;
- (id)paymentSummaryItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shippingMethodsCount;
- (void)clearShippingMethods;
- (id)shippingMethodsAtIndex:(unsigned long long)arg1;

@end
