/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOThrottlerShort : NSObject

{
    NSString *_keyPath;
    struct vector<(anonymous namespace)::Timestamp, std::__1::allocator<(anonymous namespace)::Timestamp>> _lastRequestTimes;
    unsigned int _currentIndex;
    double _timeWindow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) double timeWindow;

+ (_Bool)stateIsExpired:(struct NSDictionary *)arg1;

- (id).cxx_construct;
- (_Bool)isExpired;
- (unsigned long long)remainingEntries;
- (unsigned int)maxReqCount;
- (double)timeUntilReset;
- (id)userInfoForError;
- (_Bool)addRequestTimestamp;
- (struct NSDictionary *)captureState;
- (id)initWithKeyPath:(id)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(struct NSDictionary *)arg4;

@end
