/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSetting.h>

@class NSNumber;

@interface NUNumberSetting : NUSetting

{
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_ui_minimumValue;
    NSNumber *_ui_maximumValue;
}

@property (readonly) NSNumber *minimumValue;
@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *ui_minimumValue;
@property (readonly) NSNumber *ui_maximumValue;
@property (readonly) NSNumber *defaultValue;
@property (readonly) NSNumber *identityValue;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id *)arg2;

- (id)init;
- (id)description;
- (id)initWithAttributes:(id)arg1;
- (_Bool)validate:(id)arg1 error:(out id *)arg2;
- (_Bool)isValid:(out id *)arg1;
- (_Bool)validateNumber:(id)arg1 error:(out id *)arg2;
- (_Bool)serializeIntoDictionary:(id)arg1 error:(out id *)arg2;
- (id)initWithMinimum:(id)arg1 maximum:(id)arg2 attributes:(id)arg3;
- (id)initWithMinimum:(id)arg1 maximum:(id)arg2 uiMinimum:(id)arg3 uiMaximum:(id)arg4 attributes:(id)arg5;

@end
