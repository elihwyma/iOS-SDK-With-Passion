/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSchema.h>

@class NSDictionary;

@interface NUAdjustmentSchema : NUSchema

{
    struct NSDictionary *_settings;
}

@property (nonatomic, readonly) NSDictionary *settings;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;

- (long long)type;
- (id)copy:(id)arg1;
- (_Bool)validate:(id)arg1 error:(out id *)arg2;
- (_Bool)isValid:(out id *)arg1;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)modelForProperty:(id)arg1;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (struct NSArray *)schemaDependencies;
- (id)initWithIdentifier:(id)arg1 settings:(struct NSDictionary *)arg2 attributes:(id)arg3;
- (_Bool)validateSettings:(out id *)arg1;
- (_Bool)validateAdjustment:(id)arg1 error:(out id *)arg2;
- (_Bool)validateSettings:(id)arg1 error:(out id *)arg2;
- (id)copyAdjustment:(id)arg1;
- (id)serializeAdjustment:(id)arg1 error:(out id *)arg2;
- (id)deserializeAdjustment:(id)arg1 error:(out id *)arg2;
- (_Bool)serializeSettings:(id)arg1 intoDictionary:(id)arg2 error:(out id *)arg3;
- (_Bool)deserializeSettings:(id)arg1 fromDictionary:(id)arg2 error:(out id *)arg3;

@end
