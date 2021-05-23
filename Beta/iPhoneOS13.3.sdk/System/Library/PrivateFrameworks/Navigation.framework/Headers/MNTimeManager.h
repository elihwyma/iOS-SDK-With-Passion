/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNObserverHashTable;

@protocol MNTimeProvider;

@interface MNTimeManager : NSObject

{
    MNObserverHashTable *_timeManagerObservers;
    id <MNTimeProvider> _provider;
}

@property (retain, nonatomic) id <MNTimeProvider> provider;

+ (id)sharedManager;
+ (double)currentTime;
+ (id)currentDate;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_resetToDefaultProvider;

@end
