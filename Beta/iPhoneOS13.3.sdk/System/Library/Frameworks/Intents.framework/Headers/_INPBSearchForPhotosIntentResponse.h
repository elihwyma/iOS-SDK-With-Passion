/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBLocation;

@interface _INPBSearchForPhotosIntentResponse : PBCodable <Swift>

{
    CDStruct_a60b8694 _has;
    _Bool __encodeLegacyGloryData;
    int _searchResultsCount;
    NSString *_albumName;
    _INPBLocation *_locationCreated;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *albumName;
@property (nonatomic, readonly) _Bool hasAlbumName;
@property (retain, nonatomic) _INPBLocation *locationCreated;
@property (nonatomic, readonly) _Bool hasLocationCreated;
@property (nonatomic) int searchResultsCount;
@property (nonatomic) _Bool hasSearchResultsCount;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
