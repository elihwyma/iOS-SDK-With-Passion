/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBAppNames : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSString *_appName;
    NSString *_axSpokenName;
    NSString *_displayName;
    NSString *_spotlightName;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *appName;
@property (nonatomic, readonly) _Bool hasAppName;
@property (copy, nonatomic) NSString *axSpokenName;
@property (nonatomic, readonly) _Bool hasAxSpokenName;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (copy, nonatomic) NSString *spotlightName;
@property (nonatomic, readonly) _Bool hasSpotlightName;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
