/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowPickerSection : PBCodable

{
    NSString *_footer;
    NSMutableArray *_items;
    NSString *_title;
}

@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasFooter;
@property (retain, nonatomic) NSString *footer;
@property (retain, nonatomic) NSMutableArray *items;

+ (Class)itemsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)itemsCount;
- (void)addItems:(id)arg1;
- (void)clearItems;
- (id)itemsAtIndex:(unsigned long long)arg1;

@end
