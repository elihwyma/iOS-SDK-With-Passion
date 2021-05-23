/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/IMManualUpdater.h>

@class NSCountedSet;

@interface IMScheduledUpdater : IMManualUpdater

{
    NSCountedSet *_holdingUpdatesKeys;
}

@property (retain, nonatomic) NSCountedSet *holdingUpdatesKeys;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (_Bool)isHoldingUpdates;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)endHoldingUpdatesForAllKeys;
- (_Bool)isHoldingUpdatesForKey:(id)arg1;

@end
