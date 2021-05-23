/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet;

@interface _TVRCMediaRemoteCommandParser : NSObject

{
    NSArray *_allCommands;
    NSMutableSet *_enabledCommandNames;
}

- (void)_gatherEnabledCommands;
- (_Bool)_containsAnySkipCommands;
- (id)_skipButtons;
- (_Bool)_containsAnyTrackCommands;
- (id)_trackAndSpeedButtons;
- (_Bool)_containsEnabledCommand:(unsigned int)arg1;
- (id)buttonsForCommands:(id)arg1;

@end
