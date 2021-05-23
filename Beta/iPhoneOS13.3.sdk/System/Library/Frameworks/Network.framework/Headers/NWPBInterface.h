/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NWPBInterface : PBCodable

{
    unsigned int _delegateIndex;
    unsigned int _generation;
    unsigned int _index;
    unsigned int _mtu;
    NSString *_name;
    int _subtype;
    int _type;
    _Bool _expensive;
    struct {
        unsigned int delegateIndex:1;
        unsigned int generation:1;
        unsigned int index:1;
        unsigned int mtu:1;
        unsigned int subtype:1;
        unsigned int type:1;
        unsigned int expensive:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasSubtype;
@property (nonatomic) int subtype;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) _Bool hasIndex;
@property (nonatomic) unsigned int index;
@property (nonatomic) _Bool hasGeneration;
@property (nonatomic) unsigned int generation;
@property (nonatomic) _Bool hasDelegateIndex;
@property (nonatomic) unsigned int delegateIndex;
@property (nonatomic) _Bool hasMtu;
@property (nonatomic) unsigned int mtu;
@property (nonatomic) _Bool hasExpensive;
@property (nonatomic) _Bool expensive;

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
- (id)subtypeAsString:(int)arg1;
- (int)StringAsSubtype:(id)arg1;

@end
