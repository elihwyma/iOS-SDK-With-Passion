/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowPickerItem : PBCodable

{
    NSString *_identifier;
    NSMutableArray *_products;
    NSString *_title;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *products;

+ (Class)productsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addProducts:(id)arg1;
- (unsigned long long)productsCount;
- (void)clearProducts;
- (id)productsAtIndex:(unsigned long long)arg1;

@end
