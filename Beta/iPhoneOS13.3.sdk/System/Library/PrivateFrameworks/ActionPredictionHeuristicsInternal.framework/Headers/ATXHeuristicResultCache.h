/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class DNDState, NSHashTable, NSMutableDictionary, NSString;

@interface ATXHeuristicResultCache : NSObject

{
    NSMutableDictionary *_cache;
    NSHashTable *_expirerInternTable;
    struct _opaque_pthread_mutex_t _lock;
    DNDState *_doNotDisturbState;
    int _appRefreshToken;
    int _significantTimeToken;
    int _learnRefreshToken;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)addDNDStateUpdateListener;
+ (id)sharedPassLibrary;

- (id)init;
- (void)dealloc;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)_expire:(id)arg1 postNotification:(_Bool)arg2;
- (_Bool)isDNDActiveWithError:(id *)arg1;
- (void)setObject:(id)arg1 expirers:(id)arg2 forKey:(id)arg3;
- (id)_internExpirerLocked:(id)arg1;
- (id)objectForKey:(id)arg1 found:(_Bool *)arg2;
- (id)heuristicsCached;
- (id)firstExpirationDate;
- (void)expire:(id)arg1;
- (void)expireAll;

@end
