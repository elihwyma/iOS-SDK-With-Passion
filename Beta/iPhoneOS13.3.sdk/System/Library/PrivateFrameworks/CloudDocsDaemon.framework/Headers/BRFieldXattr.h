/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSData, NSString;

@interface BRFieldXattr : PBCodable <Swift>

{
    NSString *_name;
    NSData *_value;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSData *value;

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
