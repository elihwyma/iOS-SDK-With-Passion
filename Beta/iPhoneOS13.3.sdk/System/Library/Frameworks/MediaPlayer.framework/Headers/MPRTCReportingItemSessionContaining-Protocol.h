/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSDictionary, NSString;

@protocol MPRTCReportingItemSessionContaining <Swift>

@property (copy, nonatomic, readonly) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *rtcReportingSessionAdditionalUserInfo;

@end
