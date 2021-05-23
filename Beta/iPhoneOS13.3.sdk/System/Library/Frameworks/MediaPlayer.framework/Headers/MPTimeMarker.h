/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface MPTimeMarker : NSObject

{
    double _duration;
    unsigned long long _index;
    double _time;
    NSString *_title;
    NSURL *_url;
    long long _markerType;
    NSDictionary *_metadata;
}

@property (nonatomic, readonly) double comparableTime;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long index;
@property (nonatomic, readonly) _Bool hasArtworkAtPlaybackTime;
@property (nonatomic) double time;
@property (nonatomic, readonly) double maxTime;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic, readonly) long long markerType;

- (id)description;
- (id)initWithMarkerType:(long long)arg1;
- (id)urlTitleTrimmingCharacterSet;

@end
