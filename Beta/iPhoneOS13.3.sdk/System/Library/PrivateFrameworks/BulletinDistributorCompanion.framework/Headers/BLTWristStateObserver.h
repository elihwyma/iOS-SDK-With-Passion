/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BLTWristStateObserver : NSObject

{
    _Bool _isWristDetectDisabled;
}

@property (nonatomic, readonly) _Bool isWristDetectDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_updateWristDetectSetting;
- (_Bool)_wristDetectionEnabledRestriction;
- (_Bool)_wristDetectionDisabledPreference;
- (_Bool)_isWristDetectionDisabled;

@end
