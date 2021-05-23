/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
 */

#import <DataAccess/DAAccount.h>

@interface DAAccount (DaemonAdditions)

- (void)deviceWillSleep;
- (void)deviceDidWake;

@end
