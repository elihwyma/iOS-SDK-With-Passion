/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSData, NSString, _INPBValueMetadata;

@interface _INPBImageValue : PBCodable <Swift>

{
    struct {
        unsigned int height:1;
        unsigned int type:1;
        unsigned int width:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _type;
    NSData *_data;
    double _height;
    NSString *_proxyServiceIdentifier;
    NSString *_uri;
    _INPBValueMetadata *_valueMetadata;
    double _width;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSData *data;
@property (nonatomic, readonly) _Bool hasData;
@property (nonatomic) double height;
@property (nonatomic) _Bool hasHeight;
@property (copy, nonatomic) NSString *proxyServiceIdentifier;
@property (nonatomic, readonly) _Bool hasProxyServiceIdentifier;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic, readonly) _Bool hasUri;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;
@property (nonatomic) double width;
@property (nonatomic) _Bool hasWidth;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
