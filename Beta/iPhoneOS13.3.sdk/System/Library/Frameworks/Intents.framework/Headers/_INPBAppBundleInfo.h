/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBAppId, _INPBBuildId;

@interface _INPBAppBundleInfo : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    _INPBAppId *_appId;
    _INPBBuildId *_buildId;
    NSArray *_intentSupports;
    NSArray *_localizedProjects;
    NSArray *_supportedPlatforms;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBAppId *appId;
@property (nonatomic, readonly) _Bool hasAppId;
@property (retain, nonatomic) _INPBBuildId *buildId;
@property (nonatomic, readonly) _Bool hasBuildId;
@property (copy, nonatomic) NSArray *intentSupports;
@property (nonatomic, readonly) unsigned long long intentSupportsCount;
@property (copy, nonatomic) NSArray *localizedProjects;
@property (nonatomic, readonly) unsigned long long localizedProjectsCount;
@property (copy, nonatomic) NSArray *supportedPlatforms;
@property (nonatomic, readonly) unsigned long long supportedPlatformsCount;

+ (_Bool)supportsSecureCoding;
+ (Class)intentSupportType;
+ (Class)localizedProjectsType;
+ (Class)supportedPlatformsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearIntentSupports;
- (void)addIntentSupport:(id)arg1;
- (id)intentSupportAtIndex:(unsigned long long)arg1;
- (void)clearLocalizedProjects;
- (void)addLocalizedProjects:(id)arg1;
- (id)localizedProjectsAtIndex:(unsigned long long)arg1;
- (void)clearSupportedPlatforms;
- (void)addSupportedPlatforms:(id)arg1;
- (id)supportedPlatformsAtIndex:(unsigned long long)arg1;

@end
