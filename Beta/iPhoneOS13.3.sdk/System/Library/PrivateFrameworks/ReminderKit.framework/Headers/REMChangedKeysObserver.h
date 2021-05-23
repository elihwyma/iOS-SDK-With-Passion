/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, NSSet;

@interface REMChangedKeysObserver : NSObject

{
    NSObject *_target;
    NSArray *_keysToObserve;
    NSMutableSet *_mutableChangedKeys;
}

@property (retain, nonatomic) NSArray *keysToObserve;
@property (retain, nonatomic) NSMutableSet *mutableChangedKeys;
@property (nonatomic, readonly) NSObject *target;
@property (nonatomic, readonly) NSSet *changedKeys;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithTarget:(id)arg1 keysToObserve:(id)arg2 includeInitial:(_Bool)arg3;
- (void)keyDidChange:(id)arg1;

@end
