/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/Swift-Protocol.h>

@protocol DNDSSyncServiceDelegate;

@protocol DNDSSyncService <Swift>

@property (weak, nonatomic) id <DNDSSyncServiceDelegate> delegate;

- (unsigned short)resume;
- (unsigned short)sendMessage:withVersionNumber:completionHandler: /* Error: Ran out of types for this method. */;

@end
