/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@interface SXDebugLayoutOptionsProvider : NSObject

{
    unsigned long long _viewingLocation;
    long long _bundleSubscriptionStatus;
    long long _channelSubscriptionStatus;
    NSHashTable *_observers;
}

@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic) unsigned long long viewingLocation;
@property (nonatomic) long long bundleSubscriptionStatus;
@property (nonatomic) long long channelSubscriptionStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)notifyObservers;
- (unsigned long long)overrideViewingLocation:(unsigned long long)arg1;
- (long long)overrideBundleSubscriptionStatus:(long long)arg1;
- (long long)overrideChannelSubscriptionStatus:(long long)arg1;

@end
