/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NTPBDate;

@interface NTPBCacheHint : PBCodable

{
    NTPBDate *_accessDate;
    NSString *_key;
    int _lifetime;
    struct {
        unsigned int lifetime:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic, readonly) _Bool hasAccessDate;
@property (retain, nonatomic) NTPBDate *accessDate;
@property (nonatomic) _Bool hasLifetime;
@property (nonatomic) int lifetime;

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
