/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class MCProfileConnection, NSString;

@interface VSRestrictionsCenter : NSObject

{
    _Bool _accountModificationAllowed;
    MCProfileConnection *_profileConnection;
}

@property (nonatomic, getter=isAcountModificationAllowed) _Bool accountModificationAllowed;
@property (retain, nonatomic) MCProfileConnection *profileConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultRestrictionsCenter;

- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_updateAccountModificationAllowed;
- (_Bool)_canInstallAppsAtAll;
- (_Bool)canInstallAppWithRating:(long long)arg1;

@end
