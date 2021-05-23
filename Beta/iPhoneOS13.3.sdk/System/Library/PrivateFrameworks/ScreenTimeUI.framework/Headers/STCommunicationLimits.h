/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface STCommunicationLimits : NSObject

{
    _Bool _contactsEditable;
    long long _screenTimeCommunicationLimit;
    long long _downtimeCommunicationLimit;
    long long _contactManagementState;
}

@property long long screenTimeCommunicationLimit;
@property long long downtimeCommunicationLimit;
@property long long contactManagementState;
@property _Bool contactsEditable;

+ (_Bool)hasShownCompatibilityAlertForDSID:(id)arg1;
+ (void)setHasShownCompatibilityAlert:(_Bool)arg1 forDSID:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
