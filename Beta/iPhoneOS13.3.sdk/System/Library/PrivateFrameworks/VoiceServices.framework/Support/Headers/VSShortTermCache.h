/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSCache;

@interface VSShortTermCache : NSObject

{
    NSCache *_cache;
    NSCache *_cacheTimer;
}

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSCache *cacheTimer;

+ (id)sharedInstance;

- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 timeToLive:(double)arg3;
- (void)timeToLiveTimerFired:(id)arg1;

@end
