/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NWPBAgentClass : PBCodable

{
    NSString *_domain;
    NSString *_type;
}

@property (nonatomic, readonly) _Bool hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic, readonly) _Bool hasType;
@property (retain, nonatomic) NSString *type;

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
