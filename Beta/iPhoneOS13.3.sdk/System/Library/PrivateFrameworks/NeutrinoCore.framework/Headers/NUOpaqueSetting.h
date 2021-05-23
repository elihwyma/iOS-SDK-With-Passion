/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSetting.h>

@interface NUOpaqueSetting : NUSetting

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;
+ (id)supportedAttributes;

- (_Bool)validate:(id)arg1 error:(out id *)arg2;
- (_Bool)isValid:(out id *)arg1;
- (id)serialize:(id)arg1 error:(out id *)arg2;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)deserialize:(id)arg1 error:(out id *)arg2;
- (_Bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id *)arg3;
- (_Bool)validatePlistCompatibility:(id)arg1 error:(out id *)arg2;

@end
