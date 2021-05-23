/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXMediaEvent.h>

@interface SXMediaEngageCompleteEvent : SXMediaEvent

{
    double _mediaFrameRate;
    double _mediaDuration;
    double _mediaTimePlayed;
}

@property (nonatomic) double mediaFrameRate;
@property (nonatomic) double mediaDuration;
@property (nonatomic) double mediaTimePlayed;

@end
