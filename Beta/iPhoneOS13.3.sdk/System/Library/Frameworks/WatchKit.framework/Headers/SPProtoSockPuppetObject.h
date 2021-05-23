/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SPProtoCacheMessage;

@interface SPProtoSockPuppetObject : PBCodable

{
    double _ndouble;
    long long _nint64;
    unsigned long long _nuint64;
    SPProtoCacheMessage *_cacheMessage;
    NSString *_key;
    float _nfloat;
    int _nint32;
    unsigned int _nuint32;
    NSData *_object;
    int _subtype;
    NSString *_text;
    int _type;
    _Bool _nbool;
    struct {
        unsigned int ndouble:1;
        unsigned int nint64:1;
        unsigned int nuint64:1;
        unsigned int nfloat:1;
        unsigned int nint32:1;
        unsigned int nuint32:1;
        unsigned int subtype:1;
        unsigned int nbool:1;
    } _has;
}

@property (nonatomic) int type;
@property (nonatomic) _Bool hasSubtype;
@property (nonatomic) int subtype;
@property (nonatomic, readonly) _Bool hasCacheMessage;
@property (retain, nonatomic) SPProtoCacheMessage *cacheMessage;
@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic, readonly) _Bool hasText;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) _Bool hasNdouble;
@property (nonatomic) double ndouble;
@property (nonatomic) _Bool hasNfloat;
@property (nonatomic) float nfloat;
@property (nonatomic) _Bool hasNint64;
@property (nonatomic) long long nint64;
@property (nonatomic) _Bool hasNint32;
@property (nonatomic) int nint32;
@property (nonatomic) _Bool hasNuint64;
@property (nonatomic) unsigned long long nuint64;
@property (nonatomic) _Bool hasNuint32;
@property (nonatomic) unsigned int nuint32;
@property (nonatomic) _Bool hasNbool;
@property (nonatomic) _Bool nbool;
@property (nonatomic, readonly) _Bool hasObject;
@property (retain, nonatomic) NSData *object;

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
