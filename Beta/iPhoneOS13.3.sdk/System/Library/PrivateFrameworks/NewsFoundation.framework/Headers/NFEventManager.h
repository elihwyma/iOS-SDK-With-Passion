/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface NFEventManager : NSObject

{
    NSMutableSet *_events;
    NSMutableDictionary *_triggers;
}

@property (nonatomic, readonly) NSMutableSet *events;
@property (nonatomic, readonly) NSMutableDictionary *triggers;

- (id)init;
- (void)attemptTriggersForCurrentEvent:(id)arg1;
- (void)triggerOnAnyEvent:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)handleOnceTrigger:(id)arg1 event:(id)arg2;
- (void)handleAlwaysTrigger:(id)arg1 event:(id)arg2;
- (void)fireEvent:(id)arg1;
- (void)triggerOnceWhenAllEventsHaveOccurred:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)triggerAlwaysWhenAllEventsHaveOccurred:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)triggerOnceWhenAnyEventHasOccurred:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)triggerOnEvent:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
