/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface MPGaplessInfo : NSObject

{
    unsigned int _encodingDelayInFrames;
    unsigned int _encodingDrainInFrames;
    unsigned int _heuristicInfo;
    unsigned long long _durationInFrames;
    unsigned long long _lastPacketsResync;
}

@property (nonatomic) unsigned long long durationInFrames;
@property (nonatomic) unsigned int encodingDelayInFrames;
@property (nonatomic) unsigned int encodingDrainInFrames;
@property (nonatomic) unsigned int heuristicInfo;
@property (nonatomic) unsigned long long lastPacketsResync;

@end
