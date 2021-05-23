/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface WLKPlaybackSummary : NSObject

{
    _Bool _isAlwaysLive;
    _Bool _isTimerDerived;
    NSString *_bundleID;
    NSString *_channelID;
    NSDate *_timestamp;
    NSDate *_currentPlaybackDate;
    NSNumber *_duration;
    NSNumber *_elapsedTime;
    NSString *_accountID;
    NSString *_externalProfileID;
    NSString *_contentID;
    NSString *_serviceID;
    long long _playbackState;
    NSNumber *_playbackRate;
    long long _completionState;
    long long _playbackType;
}

@property (nonatomic) _Bool isAlwaysLive;
@property (nonatomic) _Bool isTimerDerived;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSDate *currentPlaybackDate;
@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) NSNumber *elapsedTime;
@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) NSString *externalProfileID;
@property (nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) NSString *serviceID;
@property (nonatomic, readonly) long long playbackState;
@property (nonatomic, readonly) NSNumber *playbackRate;
@property (nonatomic, readonly) long long completionState;
@property (nonatomic, readonly) long long playbackType;

+ (_Bool)supportsSecureCoding;
+ (double)playedThresholdTimeForDuration:(double)arg1;
+ (id)VODSummaryWithBundleID:(id)arg1 channelID:(id)arg2 contentID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 duration:(id)arg7 elapsedTime:(id)arg8 playbackState:(long long)arg9 playbackRate:(id)arg10 completionState:(long long)arg11;
+ (id)liveSummaryWithBundleID:(id)arg1 channelID:(id)arg2 serviceID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 playbackState:(long long)arg7 playbackRate:(id)arg8 currentPlaybackDate:(id)arg9;
+ (long long)completionStateForDuration:(double)arg1 elapsedTime:(double)arg2;
+ (id)debugStringForCompletionState:(long long)arg1;
+ (id)EBSSummaryWithBundleID:(id)arg1 channelID:(id)arg2 contentID:(id)arg3 accountID:(id)arg4 externalProfileID:(id)arg5 timestamp:(id)arg6 playbackState:(long long)arg7 playbackRate:(id)arg8 currentPlaybackDate:(id)arg9;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)_isValid;
- (id)JSONRepresentation;
- (id)initWithBundleID:(id)arg1 timestamp:(id)arg2 duration:(id)arg3 elapsedTime:(id)arg4 externalProfileID:(id)arg5 contentID:(id)arg6 accountID:(id)arg7 playbackState:(long long)arg8 playbackRate:(id)arg9 completionState:(long long)arg10 isAlwaysLive:(_Bool)arg11 serviceID:(id)arg12 currentPlaybackDate:(id)arg13 playbackType:(long long)arg14 isTimerDerived:(_Bool)arg15 channelID:(id)arg16;
- (_Bool)isEqualToSummary:(id)arg1;
- (_Bool)_compareOptional:(id)arg1 with:(id)arg2;
- (_Bool)_validate:(id)arg1 identifier:(id)arg2 expectedClass:(Class)arg3;
- (id)initWithMediaRemoteDictionary:(id)arg1 bundleID:(id)arg2 accountID:(id)arg3;
- (_Bool)isEqualToSummaryExcludingCursor:(id)arg1;
- (_Bool)isEqualToSummaryExcludingTimestamp:(id)arg1;
- (_Bool)isSameContent:(id)arg1;
- (_Bool)isLiveType;
- (void)resolveChannelID:(CDUnknownBlockType)arg1;
- (id)elapsedTimeSummaryWithPlaybackState:(long long)arg1 timerDerived:(_Bool)arg2;

@end
