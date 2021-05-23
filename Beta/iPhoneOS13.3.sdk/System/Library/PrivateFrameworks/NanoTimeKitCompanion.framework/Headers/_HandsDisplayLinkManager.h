/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableDictionary;

@interface _HandsDisplayLinkManager : NSObject

{
    CADisplayLink *_displayLink;
    NSMutableDictionary *_handlers;
    unsigned long long _nextToken;
    _Bool _inForeground;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_backgrounded;
- (id)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (id)_nextToken;
- (void)_updateDisplayLink;
- (void)_foregrounded;
- (void)_onDisplayLink:(id)arg1;
- (void)stopUpdatesForToken:(id)arg1;
- (void)_invokeHandlers;

@end
