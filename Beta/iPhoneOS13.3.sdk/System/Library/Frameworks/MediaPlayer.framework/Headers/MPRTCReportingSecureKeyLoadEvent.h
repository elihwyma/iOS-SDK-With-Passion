/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRTCReportingEvent.h>

@class NSError, NSString;

@interface MPRTCReportingSecureKeyLoadEvent : MPRTCReportingEvent

{
    double _duration;
    NSError *_error;
    NSString *_siriSessionIdentifier;
}

@property (nonatomic) double duration;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *siriSessionIdentifier;

- (id)newRTCReportingPayloadDictionary;
- (unsigned short)rtcReportingCategory;
- (unsigned short)rtcReportingType;

@end
