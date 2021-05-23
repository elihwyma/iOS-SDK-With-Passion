/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVPPlaybackReportingEvent : NSObject

{
    NSString *_name;
    double _timestamp;
    id _value;
    long long _type;
    double _duration;
    long long _durationMS;
    TVPPlaybackReportingEvent *_startEvent;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) id value;
@property (nonatomic) long long type;
@property (nonatomic) double duration;
@property (nonatomic) long long durationMS;
@property (weak, nonatomic) TVPPlaybackReportingEvent *startEvent;

- (id)description;

@end
