/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableDictionary;

@interface TKDisplayLinkManager : NSObject

{
    CADisplayLink *_displayLink;
    NSMutableDictionary *_activeObservers;
    NSMutableDictionary *_updatedObservers;
    _Bool _hasUpdatedObservers;
    _Bool _isHandlingDisplayRefresh;
    unsigned long long _warmUpModeRequirementsCount;
}

@property (nonatomic, readonly, getter=isPaused) _Bool paused;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double timestamp;

+ (void)_releaseCurrentDisplayLinkManager;
+ (id)currentDisplayLinkManager;

- (id)init;
- (void)dealloc;
- (id)_displayLink;
- (void)_displayDidRefresh:(id)arg1;
- (void)beginRequiringWarmUpMode;
- (void)endRequiringWarmUpMode;
- (void)_setDisplayLink:(id)arg1;
- (void)removeObserverWithToken:(id)arg1;
- (id)addObserverForFrameInterval:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_prepareUpdatedObserversForModification;
- (void)_didAddFirstObserver;
- (void)_didRemoveLastObserver;
- (_Bool)_isWarmUpModeEnabled;
- (id)addObserverWithHandler:(CDUnknownBlockType)arg1;

@end
