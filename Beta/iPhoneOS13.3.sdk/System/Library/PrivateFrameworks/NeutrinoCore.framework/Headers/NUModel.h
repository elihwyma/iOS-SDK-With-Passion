/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface NUModel : NSObject

{
    NSDictionary *_attributes;
}

@property (nonatomic, readonly) NSDictionary *attributes;

+ (id)requiredAttributes;
+ (_Bool)validateIdentifier:(id)arg1 error:(out id *)arg2;
+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)supportedAttributes;
+ (_Bool)validateBool:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateNumber:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateString:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateArray:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateStringArray:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateName:(id)arg1 error:(out id *)arg2;
+ (_Bool)validatePattern:(id)arg1 error:(out id *)arg2;
+ (_Bool)validatePropertyName:(id)arg1 error:(out id *)arg2;
+ (id)reservedPropertyNames;
+ (id)_deserializeObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 key:(id)arg3 error:(out id *)arg4;
+ (id)deserializeStringFromDictionary:(id)arg1 key:(id)arg2 error:(out id *)arg3;
+ (id)deserializeArrayFromDictionary:(id)arg1 key:(id)arg2 error:(out id *)arg3;
+ (id)deserializeDictionaryFromDictionary:(id)arg1 key:(id)arg2 error:(out id *)arg3;
+ (id)deserializeAttribute:(id)arg1 value:(id)arg2 error:(out id *)arg3;

- (id)init;
- (id)copy:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (_Bool)validate:(id)arg1 error:(out id *)arg2;
- (_Bool)isValid:(out id *)arg1;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)modelForProperty:(id)arg1;
- (id)serializeAsDictionary:(out id *)arg1;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (_Bool)validateAttributes:(out id *)arg1;
- (_Bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id *)arg3;
- (_Bool)serializeAttribute:(id)arg1 value:(id)arg2 intoDictionary:(id)arg3 error:(out id *)arg4;

@end
