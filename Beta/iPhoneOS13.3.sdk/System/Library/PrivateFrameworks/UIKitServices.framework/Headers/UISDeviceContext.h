/*
 Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface UISDeviceContext : NSObject

{
    NSDictionary *_deviceInfoKeysToValues;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultContext;
+ (id)_allKeys;
+ (id)_keysToValueTypes;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (long long)deviceInfoIntegerValueForKey:(id)arg1;
- (double)deviceInfoFloatValueForKey:(id)arg1;
- (id)initWithDeviceInfoValues:(id)arg1;
- (id)_dictionaryWithOnlyValidKeysFromDictionary:(id)arg1;
- (_Bool)_isDeviceInfoType:(long long)arg1 appropriateForKey:(id)arg2;
- (id)_rawDeviceInfoKeysToValues;
- (long long)_valueTypeForKey:(id)arg1;
- (long long)_valueTypeForValue:(id)arg1;
- (_Bool)_isDeviceInfoValue:(id)arg1 appropriateForKey:(id)arg2;
- (_Bool)hasDeviceInfoValueForKey:(id)arg1;
- (_Bool)deviceInfoBoolValueForKey:(id)arg1;
- (id)deviceInfoStringValueForKey:(id)arg1;

@end
