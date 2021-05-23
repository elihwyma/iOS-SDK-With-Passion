/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class LSApplicationProxy, NSMutableDictionary, NSUserDefaults;

@interface ATXPhoneWatchBundleIdCache : NSObject

{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableDictionary *_phoneToWatchCache;
    NSMutableDictionary *_watchToPhoneCache;
    NSUserDefaults *_appPredictionDefaults;
    LSApplicationProxy *_mockLSApplicationProxy;
}

@property (retain, nonatomic) LSApplicationProxy *mockLSApplicationProxy;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)initWithUserDefaults:(id)arg1;
- (void)updateMappings;
- (id)watchBundleIdForPhoneBundleId:(id)arg1;
- (id)phoneBundleIdForWatchBundleId:(id)arg1;
- (void)_saveCacheToUserDefaults;
- (void)_updatePhoneToWatchCache;

@end
