/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTTimerStorage, NSMutableSet, NSString;

@protocol NAScheduler;

@interface MTTimerIntentDonor : NSObject

{
    MTTimerStorage *_storage;
    NSMutableSet *_donatedTimerIDs;
    id <NAScheduler> _serializer;
}

@property (nonatomic, readonly) MTTimerStorage *storage;
@property (nonatomic, readonly) NSMutableSet *donatedTimerIDs;
@property (retain, nonatomic) id <NAScheduler> serializer;
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
- (void)_queue_donateCreateTimerIntent:(id)arg1 source:(id)arg2;

@end
