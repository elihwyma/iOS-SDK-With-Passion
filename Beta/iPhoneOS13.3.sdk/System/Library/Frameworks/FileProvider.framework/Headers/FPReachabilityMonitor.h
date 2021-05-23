/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSNumber;

@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPReachabilityMonitor : NSObject

{
    NSHashTable *_reachabilityObservers;
    struct __SCNetworkReachability *_reachabilityRef;
    unsigned int _reachabilityFlags;
    NSObject<OS_dispatch_queue> *_queue;
    id <NSObject> _accountDidChangeNotificationObserver;
    NSNumber *_isCellularEnabledForDocumentsAndData;
}

@property (nonatomic) unsigned int reachabilityFlags;

+ (_Bool)isNetworkReachableForFlags:(unsigned int)arg1;
+ (id)sharedReachabilityMonitor;
+ (id)_notifAccountStore;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)isNetworkReachableForBundle:(id)arg1;
- (void)_accountDidChange;
- (_Bool)_isCellularAllowedForBR;

@end
