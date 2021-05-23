/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SVMutableVideoMetadata : NSObject

{
    _Bool _muted;
    double _duration;
    double _time;
    double _framerate;
    double _timePlayed;
    double _volume;
}

@property (nonatomic) double duration;
@property (nonatomic) double time;
@property (nonatomic) double framerate;
@property (nonatomic) double timePlayed;
@property (nonatomic) _Bool muted;
@property (nonatomic) double volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
