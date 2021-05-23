/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTSnapshotScheduler.h>

@class MTTimerStorage, NSString;

@interface MTTimerSnapshot : MTSnapshotScheduler

{
    MTTimerStorage *_storage;
}

@property (nonatomic, readonly) MTTimerStorage *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithStorage:(id)arg1;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)nextTimerDidChange:(id)arg1;

@end
