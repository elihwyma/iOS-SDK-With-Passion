/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface MPRTCReportingEvent : NSObject

{
    unsigned short _rtcReportingCategory;
    unsigned short _rtcReportingType;
    long long _networkInterfaceType;
}

@property (nonatomic, readonly) unsigned short rtcReportingCategory;
@property (nonatomic, readonly) unsigned short rtcReportingType;
@property (nonatomic) long long networkInterfaceType;

- (id)newRTCReportingMessageDictionary;
- (id)newRTCReportingPayloadDictionary;

@end
