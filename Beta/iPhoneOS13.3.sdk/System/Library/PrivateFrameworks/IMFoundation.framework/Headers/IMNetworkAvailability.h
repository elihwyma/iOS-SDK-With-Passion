/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, NSTimer;

@interface IMNetworkAvailability : NSObject

{
    NSString *_guid;
    NSTimer *_timer;
    void *_context;
    double _timeout;
    double _wifiTimeout;
    double _startTime;
    unsigned long long _flags;
    unsigned long long _options;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic) void *context;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)_cancel;
- (id)initWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 timeout:(double)arg3 wifiTimeout:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)_isNetworkAvailablibityCheckingDone:(_Bool)arg1 wantsWiFi:(_Bool)arg2 wantsCellular:(_Bool)arg3 cellular:(_Bool)arg4 hasCellularDataConnection:(_Bool)arg5 done:(_Bool)arg6 withinTimeWindow:(_Bool)arg7;
- (void)_setTimer;
- (void)_timerHit:(id)arg1;
- (id)initWithFlags:(unsigned long long)arg1 timeout:(double)arg2 wifiTimeout:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
