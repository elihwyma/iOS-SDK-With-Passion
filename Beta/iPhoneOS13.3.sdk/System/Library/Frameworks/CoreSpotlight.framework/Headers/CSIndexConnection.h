/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <CoreSpotlight/CSXPCConnection.h>

@interface CSIndexConnection : CSXPCConnection

{
    _Bool _previouslyInitialized;
}

@property (nonatomic, readonly) _Bool previouslyInitialized;

+ (id)sharedConnection;

- (void)handleError:(id)arg1;
- (void)sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
