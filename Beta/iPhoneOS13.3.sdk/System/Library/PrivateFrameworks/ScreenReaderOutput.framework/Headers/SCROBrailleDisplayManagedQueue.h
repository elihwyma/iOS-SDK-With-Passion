/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class SCRCIndexMap;

@interface SCROBrailleDisplayManagedQueue : NSObject

{
    SCRCIndexMap *_stateQueueMap;
    struct __CFDictionary *_queueStateDict;
    struct __CFDictionary *_displayQueueDict;
    SCRCIndexMap *_tokenDisplayMap;
    unsigned long long _maxActiveQueueSize;
}

- (id)init;
- (void)dealloc;
- (void)removeDisplay:(id)arg1;
- (id)_queueForState:(int)arg1 createQueue:(_Bool)arg2;
- (void)_fillActiveBrailleDisplayQueue;
- (id)disconnectedDisplays;
- (void)addDisplay:(id)arg1 withState:(int)arg2;
- (void)setState:(int)arg1 forDisplay:(id)arg2;
- (int)stateForDisplay:(id)arg1;
- (id)displayForToken:(int)arg1;
- (unsigned long long)displayCountIncludingDisconnectedDisplays:(_Bool)arg1;
- (id)primaryDisplay;
- (void)setPrimaryDisplay:(id)arg1;
- (unsigned long long)activeQueueMaximumSize;
- (void)setActiveQueueMaximumSize:(unsigned long long)arg1;
- (id)activeDisplays;
- (id)activePendingDisplays;
- (id)sleepingDisplays;
- (id)loadingDisplays;

@end
