/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSetting.h>

@interface NUArraySetting : NUSetting

{
    NUSetting *_content;
}

@property (readonly) NUSetting *content;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)supportedAttributes;

- (id)init;
- (id)description;
- (id)copy:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (_Bool)validate:(id)arg1 error:(out id *)arg2;
- (_Bool)isValid:(out id *)arg1;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;
- (_Bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id *)arg3;
- (id)copyArray:(id)arg1;
- (id)initWithContent:(id)arg1 attributes:(id)arg2;

@end
