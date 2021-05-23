/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBConfidenceScore;

@interface _INPBValueMetadata : PBCodable <Swift>

{
    CDStruct_95bda58d _requiredEntitlements;
    struct {
        unsigned int confirmed:1;
    } _has;
    _Bool _confirmed;
    _Bool __encodeLegacyGloryData;
    NSString *_canonicalValue;
    _INPBConfidenceScore *_confidenceScore;
    NSString *_input;
    NSString *_source;
    NSString *_sourceAppBundleIdentifier;
    NSString *_uuid;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *canonicalValue;
@property (nonatomic, readonly) _Bool hasCanonicalValue;
@property (retain, nonatomic) _INPBConfidenceScore *confidenceScore;
@property (nonatomic, readonly) _Bool hasConfidenceScore;
@property (nonatomic) _Bool confirmed;
@property (nonatomic) _Bool hasConfirmed;
@property (copy, nonatomic) NSString *input;
@property (nonatomic, readonly) _Bool hasInput;
@property (nonatomic, readonly) int *requiredEntitlements;
@property (nonatomic, readonly) unsigned long long requiredEntitlementsCount;
@property (copy, nonatomic) NSString *source;
@property (nonatomic, readonly) _Bool hasSource;
@property (copy, nonatomic) NSString *sourceAppBundleIdentifier;
@property (nonatomic, readonly) _Bool hasSourceAppBundleIdentifier;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic, readonly) _Bool hasUuid;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearRequiredEntitlements;
- (void)addRequiredEntitlement:(int)arg1;
- (int)requiredEntitlementAtIndex:(unsigned long long)arg1;
- (void)setRequiredEntitlements:(int *)arg1 count:(unsigned long long)arg2;
- (id)requiredEntitlementsAsString:(int)arg1;
- (int)StringAsRequiredEntitlements:(id)arg1;

@end
