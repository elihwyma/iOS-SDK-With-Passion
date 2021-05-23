/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface CEMPayloadBase : NSObject

{
    NSSet *_unknownPayloadKeys;
}

@property (copy, readonly) NSSet *unknownPayloadKeys;

+ (_Bool)supportsSecureCoding;
+ (id)load:(id)arg1 error:(id *)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loadStringFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (id)loadBooleanFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (id)loadIntegerFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (void)serializeStringIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5;
- (void)serializeBooleanIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5;
- (void)serializeIntegerIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5;
- (void)serializeAssetIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 assetProvider:(id)arg4 transformType:(id)arg5 isRequired:(_Bool)arg6 defaultValue:(id)arg7;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (id)serializePayload;
- (id)loadDictionaryFromDictionary:(id)arg1 withKey:(id)arg2 classType:(Class)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5 error:(id *)arg6;
- (void)serializeDictionaryIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 dictSerializer:(CDUnknownBlockType)arg4 isRequired:(_Bool)arg5 defaultValue:(id)arg6;
- (id)loadArrayFromDictionary:(id)arg1 withKey:(id)arg2 classType:(Class)arg3 nested:(_Bool)arg4 isRequired:(_Bool)arg5 defaultValue:(id)arg6 error:(id *)arg7;
- (void)serializeArrayIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 itemSerializer:(CDUnknownBlockType)arg4 isRequired:(_Bool)arg5 defaultValue:(id)arg6;
- (id)loadArrayFromDictionary:(id)arg1 withKey:(id)arg2 validator:(CDUnknownBlockType)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5 error:(id *)arg6;
- (id)loadDataFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (void)serializeDataIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5;
- (id)loadDateFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (id)loadFloatFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 defaultValue:(id)arg4 error:(id *)arg5;
- (void)serializeDateIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5;
- (void)serializeFloatIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5;
- (void)mergeUnknownKeysFrom:(id)arg1 withParentKey:(id)arg2;
- (id)_loadObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 withKey:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5 error:(id *)arg6;
- (id)createNestedObjectWithClass:(Class)arg1 withParentKey:(id)arg2 withPayload:(id)arg3 error:(id *)arg4;
- (void)_serializeItemIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(_Bool)arg4 isDefaultValue:(_Bool)arg5;

@end
