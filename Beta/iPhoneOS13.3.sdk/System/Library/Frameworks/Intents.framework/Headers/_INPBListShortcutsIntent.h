/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBListShortcutsIntent : PBCodable <Swift>

{
    struct {
        unsigned int originDevice:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _originDevice;
    NSArray *_appTitles;
    _INPBIntentMetadata *_intentMetadata;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *appTitles;
@property (nonatomic, readonly) unsigned long long appTitlesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int originDevice;
@property (nonatomic) _Bool hasOriginDevice;

+ (_Bool)supportsSecureCoding;
+ (Class)appTitleType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearAppTitles;
- (void)addAppTitle:(id)arg1;
- (id)appTitleAtIndex:(unsigned long long)arg1;
- (id)originDeviceAsString:(int)arg1;
- (int)StringAsOriginDevice:(id)arg1;

@end
