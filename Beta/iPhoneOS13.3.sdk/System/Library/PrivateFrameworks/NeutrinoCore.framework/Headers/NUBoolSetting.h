/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSetting.h>

@class NSNumber;

@interface NUBoolSetting : NUSetting

@property (readonly) NSNumber *defaultValue;
@property (readonly) NSNumber *identityValue;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;

- (_Bool)validate:(id)arg1 error:(out id *)arg2;
- (_Bool)isValid:(out id *)arg1;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id *)arg3;

@end
