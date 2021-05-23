/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INCodableLocalizationTable, NSArray, NSMutableDictionary, NSString;

@interface INCodableEnum : NSObject <Swift>

{
    INCodableLocalizationTable *_localizationTable;
    NSString *_enumValueKeyPrefix;
    NSString *_enumValueSynonymKeyPrefix;
    NSMutableDictionary *_dictionaryKeysForCacheGroup;
    NSString *_name;
    NSString *_displayName;
    NSString *_displayNameID;
    NSString *_enumNamespace;
    long long _type;
    NSArray *_values;
}

@property (retain, nonatomic) NSMutableDictionary *_dictionaryKeysForCacheGroup;
@property (copy, nonatomic, setter=_setLocalizationTable:) INCodableLocalizationTable *_localizationTable;
@property (copy, nonatomic, readonly) NSString *_enumValueKeyPrefix;
@property (copy, nonatomic, readonly) NSString *_enumValueSynonymKeyPrefix;
@property (copy, nonatomic, setter=_setEnumNamespace:) NSString *enumNamespace;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic, readonly) NSString *displayNameID;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSArray *values;
@property (copy, nonatomic, readonly) NSString *localizedDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *cacheGroup;
@property (copy, nonatomic, readonly) NSString *keyPrefix;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)_dictionaryKeyForKeyPath:(id)arg1 object:(id)arg2;
- (id)localizedDisplayNameForLanguage:(id)arg1;
- (id)initWithName:(id)arg1 displayName:(id)arg2 displayNameID:(id)arg3 enumNamespace:(id)arg4 type:(long long)arg5 values:(id)arg6 localizationTable:(id)arg7;

@end
