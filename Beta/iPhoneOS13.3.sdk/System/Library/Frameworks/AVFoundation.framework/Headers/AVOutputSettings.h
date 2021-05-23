/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet;

@interface AVOutputSettings : NSObject

{
    NSDictionary *_outputSettingsDictionary;
}

@property (nonatomic, readonly) NSSet *compatibleMediaTypes;
@property (nonatomic, readonly) _Bool willYieldCompressedSamples;
@property (nonatomic, readonly) NSDictionary *outputSettingsDictionary;

+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id *)arg3;
+ (id)registeredOutputSettingsClasses;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (unsigned long long)_validateOutputSettingsDictionary:(id)arg1 compatibilityDescription:(id *)arg2;
+ (_Bool)supportsEmptyOutputSettingsDictionary;
+ (unsigned long long)validateOutputSettingsDictionary:(id)arg1;
+ (id)outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2;
+ (id)defaultOutputSettingsForMediaType:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
- (_Bool)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;
- (id)initWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
- (_Bool)validateUsingOutputSettingsValidator:(id)arg1 reason:(id *)arg2;

@end
