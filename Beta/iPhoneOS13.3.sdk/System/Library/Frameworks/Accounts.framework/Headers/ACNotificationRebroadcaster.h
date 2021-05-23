/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ACNotificationRebroadcaster : NSObject

+ (id)sharedRebroadcaster;

- (id)init;
- (void)dealloc;
- (void)_beginObservingAccountStoreDidChangeNotifications;
- (void)_endObservingAccountStoreDidChangeNotifications;
- (void)_accountStoreDidChange:(id)arg1;

@end
