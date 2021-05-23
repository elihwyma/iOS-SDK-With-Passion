/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MPStoreSocialServiceTransientStatesSnapshot : NSObject

{
    NSMutableDictionary *_transientFollowStatesPerProfileID;
    NSMutableDictionary *_transientFollowPendingRequestStatesPerProfileID;
}

- (id)init;
- (long long)transientFollowStateForPerson:(id)arg1;
- (long long)transientFollowPendingRequestStateForPerson:(id)arg1;
- (void)_addTransientFollowState:(long long)arg1 transientFollowPendingRequestState:(long long)arg2 forPerson:(id)arg3;

@end
