/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <CoreSpotlight/CSXPCConnection.h>

@interface CSLifeFSConnection : CSXPCConnection

+ (id)sharedConnection;

- (void)handleError:(id)arg1;
- (void)sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
