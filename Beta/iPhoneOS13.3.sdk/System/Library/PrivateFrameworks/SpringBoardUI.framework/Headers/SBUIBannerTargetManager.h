/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMapTable;

@interface SBUIBannerTargetManager : NSObject

{
    NSHashTable *_proxies;
    NSMapTable *_implementationToProxyMap;
    NSHashTable *_observers;
}

@property (nonatomic, readonly) NSArray *targets;

+ (id)sharedInstance;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_notifyObservers:(CDUnknownBlockType)arg1;
- (void)_registerTargetImplementation:(id)arg1;
- (void)_unregisterTargetImplementation:(id)arg1;
- (id)_proxyForTargetImplementation:(id)arg1;

@end
