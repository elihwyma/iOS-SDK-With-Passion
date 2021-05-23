/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUModel.h>

@interface NUSetting : NUModel

@property (readonly) id defaultValue;
@property (nonatomic, readonly) _Bool isRequired;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)supportedAttributes;
+ (id)deserializeAttributesFromDictionary:(id)arg1 error:(out id *)arg2;
+ (struct NSDictionary *)deserializeSettingsFromDictionary:(id)arg1 key:(id)arg2 error:(out id *)arg3;

- (id)description;
- (id)copy:(id)arg1;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (_Bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id *)arg3;
- (_Bool)serializeAttributesIntoDictionary:(id)arg1 error:(out id *)arg2;

@end
