/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBShareFileIntentResponse : PBCodable <Swift>

{
    struct {
        unsigned int confirm:1;
        unsigned int shareMode:1;
        unsigned int success:1;
    } _has;
    _Bool _confirm;
    _Bool _success;
    _Bool __encodeLegacyGloryData;
    int _shareMode;
    NSArray *_recipients;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool confirm;
@property (nonatomic) _Bool hasConfirm;
@property (copy, nonatomic) NSArray *recipients;
@property (nonatomic, readonly) unsigned long long recipientsCount;
@property (nonatomic) int shareMode;
@property (nonatomic) _Bool hasShareMode;
@property (nonatomic) _Bool success;
@property (nonatomic) _Bool hasSuccess;

+ (_Bool)supportsSecureCoding;
+ (Class)recipientsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearRecipients;
- (void)addRecipients:(id)arg1;
- (id)recipientsAtIndex:(unsigned long long)arg1;
- (id)shareModeAsString:(int)arg1;
- (int)StringAsShareMode:(id)arg1;

@end
