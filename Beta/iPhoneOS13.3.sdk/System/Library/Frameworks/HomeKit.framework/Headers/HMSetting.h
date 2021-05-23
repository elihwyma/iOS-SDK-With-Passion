/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMSettingValue, NSString, NSUUID;

@protocol HMSettingManager;

@interface HMSetting : NSObject <Swift>

{
    id _value;
    NSString *_keyPath;
    Class _valueClass;
    long long _type;
    id <HMSettingManager> _settingManager;
    NSUUID *_identifier;
    NSString *_name;
    unsigned long long _properties;
}

@property long long type;
@property (weak) id <HMSettingManager> settingManager;
@property (copy, readonly) NSUUID *identifier;
@property (copy) NSString *name;
@property (copy) id value;
@property (copy) NSString *keyPath;
@property (retain) Class valueClass;
@property unsigned long long properties;
@property (readonly) HMSettingValue *internalValue;
@property (readonly, getter=isWritable) _Bool writable;
@property (copy, readonly) NSString *localizedTitle;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)merge:(id)arg1;
- (void)updateValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)valueForUpdate:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4 properties:(unsigned long long)arg5;
- (id)_initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4 properties:(unsigned long long)arg5;
- (id)initWithInternal;

@end
