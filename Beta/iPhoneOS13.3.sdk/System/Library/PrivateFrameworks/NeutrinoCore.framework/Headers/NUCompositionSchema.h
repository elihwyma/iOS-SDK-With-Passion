/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSchema.h>

@class NSDictionary, NSSet;

@interface NUCompositionSchema : NUSchema

{
    NSSet *_requiredContents;
    struct NSDictionary *_contents;
}

@property (nonatomic, readonly) NSDictionary *contents;
@property (nonatomic, readonly) NSSet *requiredContents;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)supportedAttributes;

- (long long)type;
- (id)copy:(id)arg1;
- (_Bool)validate:(id)arg1 error:(out id *)arg2;
- (_Bool)isValid:(out id *)arg1;
- (_Bool)validateComposition:(id)arg1 error:(out id *)arg2;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (id)modelForProperty:(id)arg1;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (_Bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id *)arg3;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (struct NSArray *)schemaDependencies;
- (id)initWithIdentifier:(id)arg1 contents:(struct NSDictionary *)arg2 attributes:(id)arg3;
- (_Bool)validatePropertyArray:(id)arg1 error:(out id *)arg2;
- (_Bool)validateContents:(out id *)arg1;
- (_Bool)validateContents:(id)arg1 error:(out id *)arg2;
- (id)copyComposition:(id)arg1;
- (id)serializeComposition:(id)arg1 error:(out id *)arg2;
- (id)deserializeComposition:(id)arg1 error:(out id *)arg2;
- (_Bool)serializeContents:(id)arg1 intoDictionary:(id)arg2 error:(out id *)arg3;
- (_Bool)deserializeContents:(id)arg1 fromDictionary:(id)arg2 error:(out id *)arg3;

@end
