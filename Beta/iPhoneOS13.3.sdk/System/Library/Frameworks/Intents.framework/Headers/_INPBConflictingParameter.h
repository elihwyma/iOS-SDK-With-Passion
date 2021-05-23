/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBConflictingParameter : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_alternateItems;
    NSString *_keyPath;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *alternateItems;
@property (nonatomic, readonly) unsigned long long alternateItemsCount;
@property (copy, nonatomic) NSString *keyPath;
@property (nonatomic, readonly) _Bool hasKeyPath;

+ (_Bool)supportsSecureCoding;
+ (Class)alternateItemsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearAlternateItems;
- (void)addAlternateItems:(id)arg1;
- (id)alternateItemsAtIndex:(unsigned long long)arg1;

@end
