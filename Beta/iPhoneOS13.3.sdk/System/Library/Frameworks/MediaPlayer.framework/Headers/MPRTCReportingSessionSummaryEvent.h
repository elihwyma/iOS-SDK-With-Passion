/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRTCReportingEvent.h>

@class NSError, NSNumber, NSString;

@interface MPRTCReportingSessionSummaryEvent : MPRTCReportingEvent

{
    _Bool _hadBlockingTracklistLoad;
    NSError *_assetLoadError;
    double _assetLoadDuration;
    long long _blockingSecureKeyLoadCount;
    double _blockingSecureKeyLoadDuration;
    double _maximumSecureKeyLoadDuration;
    long long _secureKeyLoadCount;
    NSError *_secureKeyError;
    NSError *_tracklistLoadError;
    double _tracklistLoadDuration;
    NSError *_playbackEndError;
    long long _endReasonType;
    long long _startupState;
    long long _interfaceTypeChangeCount;
    long long _startInterfaceType;
    NSNumber *_perceivedTotalStartupTime;
    NSString *_siriSessionIdentifier;
}

@property (copy, nonatomic) NSError *assetLoadError;
@property (nonatomic) double assetLoadDuration;
@property (nonatomic) long long blockingSecureKeyLoadCount;
@property (nonatomic) double blockingSecureKeyLoadDuration;
@property (nonatomic) double maximumSecureKeyLoadDuration;
@property (nonatomic) long long secureKeyLoadCount;
@property (copy, nonatomic) NSError *secureKeyError;
@property (copy, nonatomic) NSError *tracklistLoadError;
@property (nonatomic) double tracklistLoadDuration;
@property (nonatomic) _Bool hadBlockingTracklistLoad;
@property (copy, nonatomic) NSError *playbackEndError;
@property (nonatomic) long long endReasonType;
@property (nonatomic) long long startupState;
@property (nonatomic) long long interfaceTypeChangeCount;
@property (nonatomic) long long startInterfaceType;
@property (copy, nonatomic) NSNumber *perceivedTotalStartupTime;
@property (copy, nonatomic) NSString *siriSessionIdentifier;

- (id)newRTCReportingPayloadDictionary;
- (unsigned short)rtcReportingCategory;

@end
