/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class MCProfileConnection;

__attribute__((visibility("hidden")))
@interface CADMCProfileConnectionManagedConfigurationHandler : NSObject

{
    MCProfileConnection *_connection;
}

@property (nonatomic, readonly) MCProfileConnection *connection;

- (_Bool)isOpenInRestrictionInEffect;
- (_Bool)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (_Bool)mayShowLocalAccountsForTargetBundleID:(id)arg1 targetAccountManagement:(int)arg2;
- (id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
- (id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(int)arg3;
- (id)initWithMCProfileConnection:(id)arg1;

@end
