/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBString;

@interface _INPBMediaDestination : PBCodable <Swift>

{
    struct {
        unsigned int mediaDestinationType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _mediaDestinationType;
    _INPBString *_playlistName;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) int mediaDestinationType;
@property (nonatomic) _Bool hasMediaDestinationType;
@property (retain, nonatomic) _INPBString *playlistName;
@property (nonatomic, readonly) _Bool hasPlaylistName;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)mediaDestinationTypeAsString:(int)arg1;
- (int)StringAsMediaDestinationType:(id)arg1;

@end
