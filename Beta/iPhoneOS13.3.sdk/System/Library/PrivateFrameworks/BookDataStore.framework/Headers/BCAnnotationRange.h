/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <ProtocolBuffer/PBCodable.h>

@interface BCAnnotationRange : PBCodable

{
    unsigned long long _length;
    unsigned long long _location;
}

@property (nonatomic) unsigned long long location;
@property (nonatomic) unsigned long long length;

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
