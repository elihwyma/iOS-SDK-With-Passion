/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMapTable, NSString, SBSceneHandle;

@protocol UIScenePresenter;

@interface SBWindowHidingManager : NSObject <Swift>

{
    NSMapTable *_windowStateMap;
    NSMapTable *_hidingContextMap;
    SBSceneHandle *_keyboardSceneHandle;
    struct SBWindowLevelRange_struct _hideRange;
    id <UIScenePresenter> _keyboardPresenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)start;

- (id)init;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)setAlpha:(double)arg1 forWindow:(id)arg2;
- (void)startHidingWindowsExclusivelyFromLevel:(double)arg1 toLevel:(double)arg2 forContext:(id)arg3 reason:(id)arg4;
- (void)stopHidingWindowsForContext:(id)arg1;
- (void)_takeNoteOfWindow:(id)arg1 onScreen:(id)arg2;
- (_Bool)_isHidingWindowLevel:(double)arg1;
- (void)_recomputeHideRangeAndAdjustWindows;
- (_Bool)_isHidingWindows;
- (void)_adjustWindowsForActiveHideRange;
- (void)_captureWindow:(id)arg1;
- (void)_releaseWindow:(id)arg1;
- (id)dumpHidingState;
- (id)dumpKnownWindows;

@end
