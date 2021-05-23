/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKManualUpdater.h>

@class NSCountedSet;

@interface CKScheduledUpdater : CKManualUpdater

{
    _Bool _updateSynchronouslyIfPossible;
    NSCountedSet *_holdingUpdatesKeys;
}

@property (retain, nonatomic) NSCountedSet *holdingUpdatesKeys;
@property (nonatomic) _Bool updateSynchronouslyIfPossible;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (_Bool)isHoldingUpdates;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (_Bool)isHoldingUpdatesForKey:(id)arg1;
- (void)endHoldingAllUpdatesForKey:(id)arg1;
- (void)endHoldingAllUpdates;

@end
