/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol PNPPencilInteractionEventDestination;

@interface PNPSyntheticPencilInteractionEventSource : NSObject

{
    _Bool _playing;
    _Bool _cancelled;
    id <PNPPencilInteractionEventDestination> eventDestination;
}

@property (nonatomic, readonly) NSArray *playlist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PNPPencilInteractionEventDestination> eventDestination;

- (void)stop;
- (void)play;
- (_Bool)isPlaying;
- (void)_playEventAtPlayheadPosition:(long long)arg1;
- (long long)_playlistPositionForPosition:(long long)arg1;
- (id)_terminalEventsForPlayhead;

@end
