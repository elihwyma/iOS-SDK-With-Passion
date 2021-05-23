/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol MNVoiceEventQueueDelegate;

__attribute__((visibility("hidden")))
@interface MNVoiceEventQueue : NSObject

{
    NSMutableArray *_queue;
    id <MNVoiceEventQueueDelegate> _delegate;
}

@property (weak, nonatomic) id <MNVoiceEventQueueDelegate> delegate;

- (id)init;
- (void)addEvent:(id)arg1;
- (void)removeAllEvents;
- (void)_removeEventsMatching:(id)arg1 includeEventToMatch:(_Bool)arg2;
- (_Bool)hasAnotherEvent;
- (id)dequeueNextEvent;

@end
