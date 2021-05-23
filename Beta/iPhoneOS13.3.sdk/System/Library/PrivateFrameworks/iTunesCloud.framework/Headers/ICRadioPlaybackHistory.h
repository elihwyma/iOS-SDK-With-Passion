/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICRadioPlaybackHistoryItem, NSArray, NSDictionary, NSString;

@interface ICRadioPlaybackHistory : NSObject <Swift>

{
    ICRadioPlaybackHistoryItem *_currentTrack;
    long long _numberOfSkips;
    NSString *_stationIdentifier;
    NSArray *_tracks;
}

@property (copy, nonatomic, readonly) NSString *stationIdentifier;
@property (nonatomic, readonly) long long numberOfSkips;
@property (copy, nonatomic, readonly) NSArray *tracks;
@property (copy, nonatomic, readonly) ICRadioPlaybackHistoryItem *currentTrack;
@property (copy, nonatomic, readonly) NSDictionary *propertyListRepresentation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStationIdentifier:(id)arg1;

@end
