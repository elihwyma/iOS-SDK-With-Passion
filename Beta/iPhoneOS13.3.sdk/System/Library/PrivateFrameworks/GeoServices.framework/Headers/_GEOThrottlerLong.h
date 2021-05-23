/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOThrottlerLong : NSObject

{
    NSString *_keyPath;
    unsigned int _maxRequestCount;
    double _timeWindow;
    unsigned int _currentRequestCount;
    double _lastResetTime;
    double _lastUseTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) double timeWindow;

+ (_Bool)stateIsExpired:(struct NSDictionary *)arg1;

- (_Bool)isExpired;
- (unsigned long long)remainingEntries;
- (unsigned int)maxReqCount;
- (double)timeUntilReset;
- (id)userInfoForError;
- (_Bool)addRequestTimestamp;
- (struct NSDictionary *)captureState;
- (id)initWithKeyPath:(id)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(struct NSDictionary *)arg4;
- (void)loadState:(struct NSDictionary *)arg1;
- (double)expiresAt;

@end
