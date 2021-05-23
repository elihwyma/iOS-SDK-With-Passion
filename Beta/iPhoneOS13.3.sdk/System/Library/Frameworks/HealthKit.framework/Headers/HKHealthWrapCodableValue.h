/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/Swift-Protocol.h>

@class NSData, NSString;

@interface HKHealthWrapCodableValue : PBCodable <Swift>

{
    long long _integer;
    NSData *_bytes;
    NSString *_string;
    int _type;
    struct {
        unsigned int integer:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasBytes;
@property (retain, nonatomic) NSData *bytes;
@property (nonatomic, readonly) _Bool hasString;
@property (retain, nonatomic) NSString *string;
@property (nonatomic) _Bool hasInteger;
@property (nonatomic) long long integer;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
