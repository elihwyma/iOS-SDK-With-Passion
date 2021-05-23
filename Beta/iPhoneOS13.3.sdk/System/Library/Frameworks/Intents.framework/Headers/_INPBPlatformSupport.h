/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBPlatformSupport : PBCodable <Swift>

{
    struct {
        unsigned int supportedPlatform:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _supportedPlatform;
    NSString *_minimumOsVersion;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *minimumOsVersion;
@property (nonatomic, readonly) _Bool hasMinimumOsVersion;
@property (nonatomic) int supportedPlatform;
@property (nonatomic) _Bool hasSupportedPlatform;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)supportedPlatformAsString:(int)arg1;
- (int)StringAsSupportedPlatform:(id)arg1;

@end
