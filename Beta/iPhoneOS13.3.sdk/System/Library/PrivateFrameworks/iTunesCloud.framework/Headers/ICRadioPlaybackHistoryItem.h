/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSNumber;

@interface ICRadioPlaybackHistoryItem : NSObject <Swift>

{
    NSDate *_expirationDate;
    NSNumber *_pauseTime;
    NSDictionary *_serverTrackInfo;
    NSDate *_skipDate;
    long long _storeIdentifier;
}

@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly, getter=isExpired) _Bool expired;
@property (copy, nonatomic, readonly) NSNumber *pauseTime;
@property (copy, nonatomic, readonly) NSDictionary *serverTrackInfo;
@property (copy, nonatomic, readonly) NSDate *skipDate;
@property (nonatomic, readonly) long long storeIdentifier;
@property (copy, nonatomic, readonly) NSMutableDictionary *propertyListRepresentation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrack:(id)arg1;

@end
