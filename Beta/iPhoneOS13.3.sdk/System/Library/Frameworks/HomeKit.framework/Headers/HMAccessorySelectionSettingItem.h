/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAccessorySelectionSetting, NSString, NSUUID;

@interface HMAccessorySelectionSettingItem : NSObject <Swift>

{
    NSUUID *_identifier;
    NSString *_title;
    HMAccessorySelectionSetting *_setting;
}

@property (weak) HMAccessorySelectionSetting *setting;
@property (copy, readonly) NSString *keyPath;
@property (copy, readonly) NSUUID *identifier;
@property (copy, readonly) NSString *title;
@property (copy, readonly) NSString *localizedTitle;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;

@end
