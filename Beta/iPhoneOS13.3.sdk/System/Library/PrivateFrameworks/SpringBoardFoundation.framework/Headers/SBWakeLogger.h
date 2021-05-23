/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SBWakeLogger : NSObject

{
    struct os_unfair_lock_s _lock;
    _Bool _trackingWake;
    unsigned int _timesyncService;
    unsigned int _backlightService;
    long long _homeButtonType;
    NSMutableDictionary *_wakeSouceToEventDict;
}

@property (nonatomic) _Bool trackingWake;
@property (nonatomic) long long homeButtonType;
@property (nonatomic) unsigned int timesyncService;
@property (nonatomic) unsigned int backlightService;
@property (retain, nonatomic) NSMutableDictionary *wakeSouceToEventDict;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)wakeMayBegin:(long long)arg1 withTimestamp:(unsigned long long)arg2;
- (void)_lock_wakeDidBegin:(long long)arg1;
- (void)wakeDidBegin:(long long)arg1;
- (void)wakeDidEnd;
- (void)lockDidBegin;

@end
