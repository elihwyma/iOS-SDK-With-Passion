/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBCodable.h>

@class NSString;

@interface PKProtobufPaymentMethod : PBCodable

{
    NSString *_displayName;
    NSString *_network;
    unsigned int _type;
    struct {
        unsigned int type:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic, readonly) _Bool hasNetwork;
@property (retain, nonatomic) NSString *network;
@property (nonatomic) _Bool hasType;
@property (nonatomic) unsigned int type;

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
