/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSData, NSString;

@interface _INPBIntentResponsePayloadSuccess : PBCodable <Swift>

{
    struct {
        unsigned int shouldOpenContainingApplication:1;
    } _has;
    _Bool _shouldOpenContainingApplication;
    _Bool __encodeLegacyGloryData;
    NSData *_responseMessageData;
    NSString *_responseTypeName;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSData *responseMessageData;
@property (nonatomic, readonly) _Bool hasResponseMessageData;
@property (copy, nonatomic) NSString *responseTypeName;
@property (nonatomic, readonly) _Bool hasResponseTypeName;
@property (nonatomic) _Bool shouldOpenContainingApplication;
@property (nonatomic) _Bool hasShouldOpenContainingApplication;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
