/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUModel.h>

@class NUIdentifier;

@interface NUSchema : NUModel

{
    NUIdentifier *_identifier;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NUIdentifier *identifier;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)reservedPropertyNames;
+ (id)deserializeIdentifierFromDictionary:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateSchemaIdentifier:(id)arg1 type:(long long)arg2 error:(out id *)arg3;
+ (_Bool)validateSchemaType:(id)arg1 error:(out id *)arg2;
+ (long long)schemaTypeFromString:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateIdentifiable:(id)arg1 error:(out id *)arg2;
+ (_Bool)validateIdentifiable:(id)arg1 type:(long long)arg2 error:(out id *)arg3;
+ (id)copyIdentifiableItem:(id)arg1;
+ (id)copyItem:(id)arg1 schemaIdentifier:(id)arg2;
+ (long long)deserializeMediaTypeFromDictionary:(id)arg1;
+ (_Bool)serializeMediaType:(long long)arg1 intoDictionary:(id)arg2 error:(out id *)arg3;
+ (struct NSDictionary *)deserializeContentsFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)makeJSValueForIdentifiableItem:(id)arg1 context:(id)arg2 error:(out id *)arg3;
+ (id)serializeIdentifiableItem:(id)arg1 error:(out id *)arg2;
+ (id)deserializeIdentifiableItem:(id)arg1 error:(out id *)arg2;
+ (id)serializeItem:(id)arg1 schemaIdentifier:(id)arg2 error:(out id *)arg3;
+ (id)deserializeItem:(id)arg1 schemaIdentifier:(id)arg2 error:(out id *)arg3;
+ (id)deserializeSchemaFromArray:(id)arg1 error:(out id *)arg2;

- (id)description;
- (id)initWithAttributes:(id)arg1;
- (_Bool)isValid:(out id *)arg1;
- (_Bool)validateIdentifier:(id)arg1 error:(out id *)arg2;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (_Bool)serializeIdentifier:(id)arg1 intoDictionary:(id)arg2 error:(out id *)arg3;
- (_Bool)deserializeIdentifierFromDictionary:(id)arg1 error:(out id *)arg2;
- (struct NSArray *)schemaDependencies;

@end
