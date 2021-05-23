/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBMediaSearch;

@interface _INPBSearchForMediaIntent : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_mediaItems;
    _INPBMediaSearch *_mediaSearch;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSArray *mediaItems;
@property (nonatomic, readonly) unsigned long long mediaItemsCount;
@property (retain, nonatomic) _INPBMediaSearch *mediaSearch;
@property (nonatomic, readonly) _Bool hasMediaSearch;

+ (_Bool)supportsSecureCoding;
+ (Class)mediaItemsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addMediaItems:(id)arg1;
- (void)clearMediaItems;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;

@end
