/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NWPBPath;

@interface NWPBUpdatePath : PBCodable

{
    NWPBPath *_responsePath;
}

@property (nonatomic, readonly) _Bool hasResponsePath;
@property (retain, nonatomic) NWPBPath *responsePath;

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
