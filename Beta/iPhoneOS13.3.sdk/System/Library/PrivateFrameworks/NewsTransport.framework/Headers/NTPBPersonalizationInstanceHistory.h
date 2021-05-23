/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBPersonalizationInstanceHistory : PBCodable

{
    unsigned long long _lastChangeNumber;
    NSString *_instanceIdentifier;
    struct {
        unsigned int lastChangeNumber:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasInstanceIdentifier;
@property (retain, nonatomic) NSString *instanceIdentifier;
@property (nonatomic) _Bool hasLastChangeNumber;
@property (nonatomic) unsigned long long lastChangeNumber;

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
