/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface _ATXAppDailyDoseCurrentStore : NSObject

{
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic int _fd;
    NSMutableDictionary *_cache;
    NSDate *_expires;
}

- (id)init;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)_overwrite;
- (void)closePermanently;
- (void)_openFd;
- (void)_readCacheAndExpiration;
- (id)_getCacheFromFile;
- (_Bool)isExpiredAt:(id)arg1;
- (_Bool)isExpiredNow;
- (void)resetWithDurationMap:(id)arg1 on:(id)arg2;
- (double)currentDoseFor:(id)arg1;
- (void)increaseDoseFor:(id)arg1 by:(double)arg2;

@end
