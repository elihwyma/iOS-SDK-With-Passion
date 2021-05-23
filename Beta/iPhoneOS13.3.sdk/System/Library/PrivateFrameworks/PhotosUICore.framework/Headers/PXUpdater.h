/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableIndexSet;

@interface PXUpdater : NSObject

{
    SEL *_orderedUpdateSelectors;
    unsigned long long _orderedUpdateSelectorsCapacity;
    unsigned long long _orderedUpdateSelectorsCount;
    NSMutableIndexSet *_updateSelectorsNeedingUpdate;
    NSMutableIndexSet *_updateSelectorsAlreadyUpdated;
    _Bool _isPerformingUpdates;
    _Bool _updatePassScheduled;
    _Bool _extraChecksEnabled;
    id _target;
    SEL _needsUpdateSelector;
}

@property (nonatomic, getter=isUpdatePassScheduled) _Bool updatePassScheduled;
@property (nonatomic) _Bool extraChecksEnabled;
@property (weak, nonatomic, readonly) id target;
@property (nonatomic) SEL needsUpdateSelector;

- (id)init;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;
- (void)updateIfNeeded;
- (id)initWithTarget:(id)arg1 needsUpdateSelector:(SEL)arg2;
- (void)addUpdateSelector:(SEL)arg1;
- (void)addUpdateSelector:(SEL)arg1 needsUpdate:(_Bool)arg2;
- (void)setNeedsUpdateOf:(SEL)arg1;
- (void)_scheduleUpdatePassIfNeeded;

@end
