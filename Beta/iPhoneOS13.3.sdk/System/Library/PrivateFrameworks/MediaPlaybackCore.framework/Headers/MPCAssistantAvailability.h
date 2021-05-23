/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@interface MPCAssistantAvailability : NSObject

- (long long)assistantStreamingGetAvailability:(CDStruct_8024420c)arg1;
- (void)assistantRadioGetAvailability:(CDStruct_8024420c)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)assistantStreamingGetAvailability;
- (void)assistantRadioGetAvailability:(CDUnknownBlockType)arg1;

@end
