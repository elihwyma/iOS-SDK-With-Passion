/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MRGameControllerDelayedEvents : NSObject

{
    struct NSMutableDictionary *_events;
}

- (void)invokeEventsForController:(unsigned long long)arg1 beacuseElement:(int)arg2;
- (id)eventForController:(unsigned long long)arg1 element:(int)arg2;

@end
