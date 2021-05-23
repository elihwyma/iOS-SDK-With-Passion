/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBApplication;

@interface SBDirectToAirPlayTestRecipe : NSObject

{
    SBApplication *_currentlyReadyApp;
    SBApplication *_currentlyPlayingApp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;

- (id)title;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (void)_claimForegroundAppIsPlayingVideo;
- (void)_clearPlayingApp;
- (id)_anyForegroundApplication;

@end
