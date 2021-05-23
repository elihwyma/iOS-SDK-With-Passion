/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSchema.h>

@class NSArray, NSDictionary, NUPattern;

@interface NUArraySchema : NUSchema

{
    NSDictionary *_aliasToIdentifier;
    NSDictionary *_identifierToAlias;
    long long _contentType;
    NUPattern *_pattern;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) NUPattern *pattern;
@property (nonatomic, readonly) NSDictionary *contents;
@property (nonatomic, readonly) NSArray *defaultArray;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)supportedAttributes;
+ (long long)deserializeContentTypeFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)deserializePatternFromDictionary:(id)arg1 error:(out id *)arg2;

- (long long)type;
- (id)copy:(id)arg1;
- (_Bool)validate:(id)arg1 error:(out id *)arg2;
- (_Bool)isValid:(out id *)arg1;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (_Bool)validateArray:(id)arg1 error:(out id *)arg2;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (_Bool)validateAttributes:(out id *)arg1;
- (_Bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id *)arg3;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (struct NSArray *)schemaDependencies;
- (_Bool)validateContents:(out id *)arg1;
- (id)initWithIdentifier:(id)arg1 contentType:(long long)arg2 contents:(struct NSDictionary *)arg3 pattern:(id)arg4 attributes:(id)arg5;
- (_Bool)validateDefaultArray:(id)arg1 error:(out id *)arg2;
- (_Bool)validateArrayOrder:(id)arg1 error:(out id *)arg2;
- (_Bool)validateArrayContents:(id)arg1 error:(out id *)arg2;
- (id)copyArray:(id)arg1;
- (id)makeJSValueFromArray:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (id)serializeArray:(id)arg1 error:(out id *)arg2;
- (id)deserializeArray:(id)arg1 error:(out id *)arg2;

@end
