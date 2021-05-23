/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCNetworkReachability, NSHashTable, NSString;

@interface NUReachabilityProvider : NSObject

{
    FCNetworkReachability *_networkReachability;
    NSHashTable *_observers;
}

@property (nonatomic, readonly) FCNetworkReachability *networkReachability;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isNetworkReachable;
- (void)networkReachabilityDidChange:(id)arg1;
- (void)addReachabilityObserver:(id)arg1;
- (void)removeReachabilityObserver:(id)arg1;
- (id)initWithNetworkReachability:(id)arg1;

@end
