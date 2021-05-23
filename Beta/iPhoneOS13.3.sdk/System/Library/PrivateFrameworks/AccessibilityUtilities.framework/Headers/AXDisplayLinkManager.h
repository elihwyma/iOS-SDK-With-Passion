/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableSet;

@interface AXDisplayLinkManager : NSObject

{
    _Bool _hasUpdatedTargetActions;
    _Bool _handlingDisplayRefresh;
    CADisplayLink *_storedDisplayLink;
    NSMutableSet *_activeTargetActions;
    NSMutableSet *_updatedTargetActions;
    unsigned long long _warmUpModeRequirementsCount;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) CADisplayLink *storedDisplayLink;
@property (retain, nonatomic) NSMutableSet *activeTargetActions;
@property (retain, nonatomic) NSMutableSet *updatedTargetActions;
@property (nonatomic) _Bool hasUpdatedTargetActions;
@property (nonatomic, getter=isHandlingDisplayRefresh) _Bool handlingDisplayRefresh;
@property (nonatomic) unsigned long long warmUpModeRequirementsCount;
@property (nonatomic, readonly, getter=isWarmUpModeEnabled) _Bool warmUpModeEnabled;
@property (nonatomic, readonly, getter=isPaused) _Bool paused;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double timestamp;

+ (void)_releaseCurrentDisplayLinkManager;
+ (id)currentDisplayLinkManager;

- (id)init;
- (void)_displayDidRefresh:(id)arg1;
- (id)_prepareUpdatedTargetActionsForModification;
- (void)_didAddFirstTargetAction;
- (void)_didRemoveLastTargetAction;
- (void)addTarget:(id)arg1 selector:(SEL)arg2;
- (void)removeTarget:(id)arg1 selector:(SEL)arg2;
- (void)beginRequiringWarmUpMode;
- (void)endRequiringWarmUpMode;

@end
