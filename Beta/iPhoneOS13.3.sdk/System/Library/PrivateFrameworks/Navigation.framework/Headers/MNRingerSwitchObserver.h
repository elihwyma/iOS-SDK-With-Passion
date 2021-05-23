/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNRingerSwitchObserver : NSObject

{
    _Bool _ringerSwitchEnabled;
    int _ringerStateNotifyToken;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int ringerStateNotifyToken;
@property (nonatomic) _Bool ringerSwitchEnabled;

+ (id)sharedObserver;

- (id)init;
- (void)dealloc;
- (void)registerForRingerStateNotifications;
- (void)loadPropertiesOnConcurrentQueue;
- (void)unregisterForRingerStateNotifications;
- (_Bool)fetchRingerSwitchEnabled;
- (unsigned long long)stateForNotifyToken:(int)arg1;

@end
