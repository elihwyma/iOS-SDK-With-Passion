/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <CoreSpotlight/CSIndexConnection.h>

@interface CSIndexDelegateConnection : CSIndexConnection

+ (id)sharedConnection;

- (void)handleError:(id)arg1;
- (id)indexForID:(id)arg1;
- (id)indexForProtectionClass:(id)arg1;
- (void)handleReply:(id)arg1;

@end
