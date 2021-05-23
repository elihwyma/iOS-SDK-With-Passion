/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NNMKProtoVIPSender : PBCodable

{
    NSString *_displayName;
    NSMutableArray *_emailAddresses;
    NSString *_name;
}

@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *emailAddresses;

+ (Class)emailAddressesType;
+ (id)protoVIP:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearEmailAddresses;
- (void)addEmailAddresses:(id)arg1;
- (unsigned long long)emailAddressesCount;
- (id)emailAddressesAtIndex:(unsigned long long)arg1;
- (id)vipSender;

@end
