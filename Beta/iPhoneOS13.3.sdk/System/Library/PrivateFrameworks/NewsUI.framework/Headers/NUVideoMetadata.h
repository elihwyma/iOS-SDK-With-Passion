/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface NUVideoMetadata : NSObject

{
    _Bool _muted;
    double _playbackPosition;
    double _timePlayed;
    double _duration;
    double _volume;
    NSError *_error;
}

@property (nonatomic) double playbackPosition;
@property (nonatomic) double timePlayed;
@property (nonatomic) double duration;
@property (nonatomic) _Bool muted;
@property (nonatomic) double volume;
@property (copy, nonatomic) NSError *error;

@end
