/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NTPBLRUCacheEntry : PBCodable

{
    unsigned long long _lastAccessed;
    NSData *_key;
    NSData *_value;
    struct {
        unsigned int lastAccessed:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSData *key;
@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) NSData *value;
@property (nonatomic) _Bool hasLastAccessed;
@property (nonatomic) unsigned long long lastAccessed;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
