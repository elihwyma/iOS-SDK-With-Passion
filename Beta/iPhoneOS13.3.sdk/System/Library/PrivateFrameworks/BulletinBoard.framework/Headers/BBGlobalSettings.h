/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@interface BBGlobalSettings : NSObject

{
    long long _globalContentPreviewSetting;
    long long _globalSpokenNotificationSetting;
}

@property (nonatomic) long long globalContentPreviewSetting;
@property (nonatomic) long long globalSpokenNotificationSetting;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentPreviewSetting:(long long)arg1 spokenNotificationSetting:(long long)arg2;

@end
