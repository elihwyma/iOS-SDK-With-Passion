/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <Foundation/NSObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSData, NSMutableDictionary, NSNumber, NSString;

@interface AceObject : NSObject <Swift>

{
    NSNumber *_deserializationDuration;
    NSNumber *_mutatingCommand;
    NSString *_aceId;
    NSString *_refId;
    NSNumber *_usefulnessScore;
    NSData *_plistData;
    NSMutableDictionary *_dict;
}

@property (nonatomic, readonly) NSData *plistData;
@property (nonatomic, readonly) NSMutableDictionary *dict;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSNumber *usefulnessScore;
@property (nonatomic) _Bool mutatingCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)dictionaryArrayWithAceObjectArray:(id)arg1;
+ (id)newAceObjectWithGenericCommand:(id)arg1 context:(id)arg2;
+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)_newAceObjectWithMutableDictionary:(id)arg1;
+ (id)_filteredDictionaryForKeySet:(id)arg1 plistData:(id)arg2;
+ (id)aceObjectWithGenericCommand:(id)arg1 context:(id)arg2;
+ (id)aceObjectWithDictionary:(id)arg1;
+ (id)_aceObjectWithMutableDictionary:(id)arg1 context:(id)arg2;
+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;
+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;
+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;
+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;
+ (id)dictionaryWithAceObjectDictionary:(id)arg1;
+ (id)aceObjectWithPlistData:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)_dict;
- (id)groupIdentifier;
- (id)properties;
- (id)fullDescription;
- (id)_serializedData;
- (_Bool)_isDeserialized;
- (id)encodedClassName;
- (id)propertyForKeyWithoutDeserializing:(id)arg1;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (id)_initWithPlistData:(id)arg1 aceId:(id)arg2 refId:(id)arg3 usefulnessScore:(id)arg4 mutatingCommand:(id)arg5;
- (id)_initWithMutableDictionary:(id)arg1;
- (void)_deserializeFromPlistData;
- (id)topLevelPropertyForKey:(id)arg1;
- (void)setTopLevelProperty:(id)arg1 forKey:(id)arg2;
- (id)forceEagerDeserialization;
- (id)_descriptionHint;
- (void)_appendDescriptionOfObject:(id)arg1 toString:(id)arg2 atDepth:(unsigned long long)arg3 withPrefixes:(id)arg4 hint:(id)arg5;
- (_Bool)hasArrayForPropertyForKey:(id)arg1;
- (id)deserializationDuration;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
