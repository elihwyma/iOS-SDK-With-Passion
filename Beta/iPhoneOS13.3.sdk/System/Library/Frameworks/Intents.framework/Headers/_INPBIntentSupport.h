/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString;

@interface _INPBIntentSupport : PBCodable <Swift>

{
    struct _has;
    _Bool __encodeLegacyGloryData;
    NSArray *_intentsRestrictedWhileLockeds;
    NSArray *_intentsSupporteds;
    NSArray *_supportedMediaCategories;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *intentsRestrictedWhileLockeds;
@property (nonatomic, readonly) unsigned long long intentsRestrictedWhileLockedsCount;
@property (copy, nonatomic) NSArray *intentsSupporteds;
@property (nonatomic, readonly) unsigned long long intentsSupportedsCount;
@property (copy, nonatomic) NSArray *supportedMediaCategories;
@property (nonatomic, readonly) unsigned long long supportedMediaCategoriesCount;

+ (_Bool)supportsSecureCoding;
+ (Class)intentsRestrictedWhileLockedType;
+ (Class)intentsSupportedType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearIntentsRestrictedWhileLockeds;
- (void)addIntentsRestrictedWhileLocked:(id)arg1;
- (id)intentsRestrictedWhileLockedAtIndex:(unsigned long long)arg1;
- (void)clearIntentsSupporteds;
- (void)addIntentsSupported:(id)arg1;
- (id)intentsSupportedAtIndex:(unsigned long long)arg1;
- (void)clearSupportedMediaCategories;
- (void)addSupportedMediaCategories:(id)arg1;
- (id)supportedMediaCategoriesAtIndex:(unsigned long long)arg1;

@end
