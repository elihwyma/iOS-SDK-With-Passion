/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBCustomObject : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_alternatives;
    NSString *_displayString;
    NSString *_identifier;
    NSString *_pronunciationHint;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *alternatives;
@property (nonatomic, readonly) unsigned long long alternativesCount;
@property (copy, nonatomic) NSString *displayString;
@property (nonatomic, readonly) _Bool hasDisplayString;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (copy, nonatomic) NSString *pronunciationHint;
@property (nonatomic, readonly) _Bool hasPronunciationHint;

+ (_Bool)supportsSecureCoding;
+ (Class)alternativeType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)alternativeAtIndex:(unsigned long long)arg1;
- (void)clearAlternatives;
- (void)addAlternative:(id)arg1;

@end
