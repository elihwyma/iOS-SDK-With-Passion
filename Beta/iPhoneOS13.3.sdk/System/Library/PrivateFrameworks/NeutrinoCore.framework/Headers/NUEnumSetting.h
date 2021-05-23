/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSetting.h>

@class NSArray, NSString;

@interface NUEnumSetting : NUSetting

{
    NSArray *_values;
}

@property (readonly) NSArray *values;
@property (readonly) NSString *defaultValue;
@property (readonly) NSString *identityValue;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;

- (id)init;
- (id)description;
- (id)initWithAttributes:(id)arg1;
- (_Bool)validate:(id)arg1 error:(out id *)arg2;
- (_Bool)isValid:(out id *)arg1;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)initWithValues:(id)arg1 attributes:(id)arg2;
- (_Bool)validateValues:(out id *)arg1;

@end
