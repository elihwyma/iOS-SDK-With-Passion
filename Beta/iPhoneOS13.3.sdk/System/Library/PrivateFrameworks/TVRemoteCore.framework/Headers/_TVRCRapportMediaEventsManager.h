/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, RPMediaControlSession;

@interface _TVRCRapportMediaEventsManager : NSObject

{
    int _currentSetting;
    NSSet *_volumeCommands;
    NSMutableSet *_mediaCommands;
    RPMediaControlSession *_mediaSession;
    CDUnknownBlockType _eventHandler;
}

@property (retain, nonatomic) NSSet *volumeCommands;
@property (retain, nonatomic) NSMutableSet *mediaCommands;
@property (retain, nonatomic) RPMediaControlSession *mediaSession;
@property (copy, nonatomic) CDUnknownBlockType eventHandler;
@property (nonatomic) int currentSetting;
@property (readonly) NSSet *supportedMediaCommands;

- (void)dealloc;
- (int)_commandForMediaButtonEvent:(id)arg1;
- (void)sendMediaEvent:(id)arg1;
- (id)initWithCompanionLinkClient:(id)arg1 eventHandler:(CDUnknownBlockType)arg2;
- (void)_setupMediaCommands:(unsigned long long)arg1;
- (void)_refreshCaptionState;
- (id)supportedCaptionEvents;
- (int)_captionSettingForButtonEvent:(id)arg1;

@end
