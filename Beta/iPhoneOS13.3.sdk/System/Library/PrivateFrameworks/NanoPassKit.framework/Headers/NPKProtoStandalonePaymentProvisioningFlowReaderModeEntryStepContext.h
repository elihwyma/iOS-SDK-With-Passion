/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandalonePaymentSetupProduct, NSMutableArray, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext : PBCodable

{
    NPKProtoStandalonePaymentSetupProduct *_product;
    NSMutableArray *_setupFields;
    NSString *_subtitle;
    NSString *_title;
}

@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSMutableArray *setupFields;
@property (nonatomic, readonly) _Bool hasProduct;
@property (retain, nonatomic) NPKProtoStandalonePaymentSetupProduct *product;

+ (Class)setupFieldsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addSetupFields:(id)arg1;
- (unsigned long long)setupFieldsCount;
- (void)clearSetupFields;
- (id)setupFieldsAtIndex:(unsigned long long)arg1;

@end
