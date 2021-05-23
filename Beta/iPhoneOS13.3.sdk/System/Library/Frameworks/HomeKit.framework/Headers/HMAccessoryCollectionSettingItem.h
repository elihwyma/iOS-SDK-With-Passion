/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAccessoryCollectionSetting, HMFUnfairLock, NSData, NSUUID;

@protocol NSObject><NSCopying><NSSecureCoding;

@interface HMAccessoryCollectionSettingItem : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    id <NSObject><NSCopying><NSSecureCoding> _value;
    NSData *_serializedValue;
    NSUUID *_identifier;
    HMAccessoryCollectionSetting *_setting;
}

@property (weak) HMAccessoryCollectionSetting *setting;
@property (readonly) NSData *serializedValue;
@property (copy, readonly) NSUUID *identifier;
@property (copy, readonly) id <NSObject><NSCopying><NSSecureCoding> value;

+ (_Bool)supportsSecureCoding;
+ (id)shortDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)initWithValue:(id)arg1;
- (id)descriptionWithPointer:(_Bool)arg1;

@end
