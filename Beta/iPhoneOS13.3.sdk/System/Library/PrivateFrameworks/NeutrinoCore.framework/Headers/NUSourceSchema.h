/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSchema.h>

@interface NUSourceSchema : NUSchema

+ (id)identifier;
+ (id)requiredAttributes;
+ (id)supportedAttributes;

- (id)init;
- (long long)type;
- (id)identifier;
- (id)copy:(id)arg1;
- (_Bool)validate:(id)arg1 error:(out id *)arg2;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (struct NSArray *)schemaDependencies;
- (_Bool)validateSource:(id)arg1 error:(out id *)arg2;
- (id)serializeSource:(id)arg1 error:(out id *)arg2;
- (id)deserializeSource:(id)arg1 error:(out id *)arg2;
- (_Bool)serializeAssetIdentifier:(id)arg1 intoDictionary:(id)arg2 error:(out id *)arg3;
- (id)deserializeAssetIdentifierFromDictionary:(id)arg1 error:(out id *)arg2;

@end
