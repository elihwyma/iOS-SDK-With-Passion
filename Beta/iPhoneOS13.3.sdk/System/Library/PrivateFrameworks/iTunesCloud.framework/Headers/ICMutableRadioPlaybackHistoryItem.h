/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRadioPlaybackHistoryItem.h>

@class NSDate, NSDictionary, NSNumber;

@interface ICMutableRadioPlaybackHistoryItem : ICRadioPlaybackHistoryItem

@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSNumber *pauseTime;
@property (copy, nonatomic) NSDictionary *serverTrackInfo;
@property (copy, nonatomic) NSDate *skipDate;
@property (nonatomic) long long storeIdentifier;

@end
