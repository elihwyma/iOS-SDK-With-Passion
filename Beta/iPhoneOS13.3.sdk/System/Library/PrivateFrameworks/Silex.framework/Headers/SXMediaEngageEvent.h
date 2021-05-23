/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXMediaEvent.h>

@class NSError, NSString;

@interface SXMediaEngageEvent : SXMediaEvent

{
    _Bool _muted;
    unsigned long long _userAction;
    double _mediaTimePlayed;
    unsigned long long _mediaPlayMethod;
    NSString *_mediaPauseMethod;
    NSString *_mediaResumeMethod;
    unsigned long long _mediaPausePosition;
    unsigned long long _mediaResumePosition;
    double _mediaFrameRate;
    double _mediaDuration;
    double _volume;
    NSError *_error;
}

@property (nonatomic) unsigned long long userAction;
@property (nonatomic) double mediaTimePlayed;
@property (nonatomic) unsigned long long mediaPlayMethod;
@property (retain, nonatomic) NSString *mediaPauseMethod;
@property (retain, nonatomic) NSString *mediaResumeMethod;
@property (nonatomic) unsigned long long mediaPausePosition;
@property (nonatomic) unsigned long long mediaResumePosition;
@property (nonatomic) double mediaFrameRate;
@property (nonatomic) double mediaDuration;
@property (nonatomic) _Bool muted;
@property (nonatomic) double volume;
@property (retain, nonatomic) NSError *error;

@end
