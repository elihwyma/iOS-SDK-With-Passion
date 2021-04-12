//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UNSNotificationTopicRecord : NSObject
{
    BOOL _supportsAlerts;
    BOOL _supportsBadges;
    BOOL _supportsSounds;
    BOOL _supportsLockScreen;
    BOOL _supportsNotificationCenter;
    BOOL _supportsCarPlay;
    BOOL _supportsSpoken;
    BOOL _supportsCriticalAlerts;
    BOOL _modalAlertStyle;
    NSString *_identifier;
    NSString *_displayName;
    NSString *_displayNameLocalizationKey;
    NSUInteger _priority;
    NSString *_sortIdentifier;
}

@property(nonatomic) BOOL modalAlertStyle; // @synthesize modalAlertStyle=_modalAlertStyle;
@property(nonatomic) BOOL supportsCriticalAlerts; // @synthesize supportsCriticalAlerts=_supportsCriticalAlerts;
@property(nonatomic) BOOL supportsSpoken; // @synthesize supportsSpoken=_supportsSpoken;
@property(nonatomic) BOOL supportsCarPlay; // @synthesize supportsCarPlay=_supportsCarPlay;
@property(nonatomic) BOOL supportsNotificationCenter; // @synthesize supportsNotificationCenter=_supportsNotificationCenter;
@property(nonatomic) BOOL supportsLockScreen; // @synthesize supportsLockScreen=_supportsLockScreen;
@property(nonatomic) BOOL supportsSounds; // @synthesize supportsSounds=_supportsSounds;
@property(nonatomic) BOOL supportsBadges; // @synthesize supportsBadges=_supportsBadges;
@property(nonatomic) BOOL supportsAlerts; // @synthesize supportsAlerts=_supportsAlerts;
@property(copy, nonatomic) NSString *sortIdentifier; // @synthesize sortIdentifier=_sortIdentifier;
@property(nonatomic) NSUInteger priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *displayNameLocalizationKey; // @synthesize displayNameLocalizationKey=_displayNameLocalizationKey;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

