/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <CoreSpotlight/CSIndexConnection.h>

@interface CSPrivateIndexConnection : CSIndexConnection

+ (id)privateIndexConnectionForToken:(id)arg1;
+ (void)removePrivateIndexConnectionForToken:(id)arg1;

- (void)sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
