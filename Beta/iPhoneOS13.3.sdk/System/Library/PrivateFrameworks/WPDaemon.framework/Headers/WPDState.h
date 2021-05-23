/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@protocol OS_dispatch_queue;

@interface WPDState : NSObject

{
    _Bool _restricted;
    _Bool _initialUpdate;
    long long _state;
    NSObject<OS_dispatch_queue> *_cbQueue;
    CDUnknownBlockType _notification;
    NSMutableSet *_cbManagers;
    NSMutableDictionary *_cbStates;
}

@property long long state;
@property _Bool restricted;
@property (weak) NSObject<OS_dispatch_queue> *cbQueue;
@property (weak) CDUnknownBlockType notification;
@property (retain) NSMutableSet *cbManagers;
@property (retain) NSMutableDictionary *cbStates;
@property _Bool initialUpdate;

+ (long long)getWPStateFromCBManagerState:(long long)arg1;

- (void)dealloc;
- (id)description;
- (id)initWithQueue:(id)arg1;
- (void)coalesceState:(long long *)arg1 Restricted:(_Bool *)arg2 UpdateCache:(_Bool)arg3;
- (void)registerManager:(id)arg1;
- (void)updateWithManager:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)updateWithCompletion:(CDUnknownBlockType)arg1;

@end
