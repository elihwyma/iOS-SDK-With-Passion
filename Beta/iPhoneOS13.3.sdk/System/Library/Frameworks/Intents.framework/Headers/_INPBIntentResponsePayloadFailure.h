/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface _INPBIntentResponsePayloadFailure : PBCodable <Swift>

{
    struct {
        unsigned int appLaunchRequested:1;
        unsigned int errorCode:1;
    } _has;
    _Bool _appLaunchRequested;
    _Bool __encodeLegacyGloryData;
    int _errorCode;
    NSString *_enumTypeName;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool appLaunchRequested;
@property (nonatomic) _Bool hasAppLaunchRequested;
@property (copy, nonatomic) NSString *enumTypeName;
@property (nonatomic, readonly) _Bool hasEnumTypeName;
@property (nonatomic) int errorCode;
@property (nonatomic) _Bool hasErrorCode;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
