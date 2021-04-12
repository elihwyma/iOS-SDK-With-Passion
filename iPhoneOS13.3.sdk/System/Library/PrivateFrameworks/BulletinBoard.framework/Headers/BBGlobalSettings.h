//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface BBGlobalSettings : NSObject <NSCopying, NSSecureCoding>
{
    long long _globalContentPreviewSetting;
    long long _globalSpokenNotificationSetting;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long globalSpokenNotificationSetting; // @synthesize globalSpokenNotificationSetting=_globalSpokenNotificationSetting;
@property(nonatomic) long long globalContentPreviewSetting; // @synthesize globalContentPreviewSetting=_globalContentPreviewSetting;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithContentPreviewSetting:(long long)arg1 spokenNotificationSetting:(long long)arg2;

@end

