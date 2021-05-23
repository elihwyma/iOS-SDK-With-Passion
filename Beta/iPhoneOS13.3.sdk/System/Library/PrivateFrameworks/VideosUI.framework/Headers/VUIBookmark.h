/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class NSDate, VUIBookmarkKey;

__attribute__((visibility("hidden")))
@interface VUIBookmark : NSObject <Swift>

{
    _Bool _hasBeenPlayed;
    _Bool _hasBeenRented;
    _Bool _isMarkedAsUnwatched;
    _Bool _hasFakeTimestamp;
    VUIBookmarkKey *_key;
    double _bookmarkTime;
    NSDate *_bookmarkTimestamp;
    unsigned long long _playCount;
}

@property (nonatomic) _Bool hasFakeTimestamp;
@property (nonatomic, readonly) VUIBookmarkKey *key;
@property (nonatomic, readonly) double bookmarkTime;
@property (nonatomic, readonly) NSDate *bookmarkTimestamp;
@property (nonatomic, readonly) unsigned long long playCount;
@property (nonatomic, readonly) _Bool hasBeenPlayed;
@property (nonatomic, readonly) _Bool hasBeenRented;
@property (nonatomic, readonly) _Bool isMarkedAsUnwatched;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)_copyWithResultClass:(Class)arg1;
- (void)_setBookmarkTimeWithoutUpdatingTimestamp:(double)arg1;
- (void)_setBookmarkTimestamp:(id)arg1;
- (void)_setPlayCount:(unsigned long long)arg1;
- (void)_setHasBeenPlayed:(_Bool)arg1;
- (void)_setHasBeenRented:(_Bool)arg1;
- (void)_setIsMarkedAsUnwatched:(_Bool)arg1;
- (_Bool)hasRemoteData;

@end
