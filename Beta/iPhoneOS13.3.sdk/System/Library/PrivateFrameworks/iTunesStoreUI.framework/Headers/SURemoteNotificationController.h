/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@interface SURemoteNotificationController : NSObject

@property (nonatomic, readonly) unsigned long long enabledNotificationTypes;

+ (id)sharedInstance;

- (id)init;
- (void)handleRegistrationFailureWithError:(id)arg1;
- (void)handleRegistrationSuccessWithToken:(id)arg1;
- (void)handleNotificationDictionary:(id)arg1;

@end
