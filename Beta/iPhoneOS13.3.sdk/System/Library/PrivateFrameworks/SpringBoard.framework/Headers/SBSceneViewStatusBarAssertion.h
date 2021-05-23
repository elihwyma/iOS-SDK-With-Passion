/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, SBAppStatusBarSettings;

@interface SBSceneViewStatusBarAssertion : NSObject

{
    NSHashTable *_observers;
    _Bool _shouldDrawStatusBarInsideSceneView;
    long long _nubViewHidden;
    SBAppStatusBarSettings *_settings;
    unsigned long long _level;
}

@property (nonatomic, getter=isStatusBarHidden) _Bool statusBarHidden;
@property (nonatomic) long long nubViewHidden;
@property (copy, nonatomic) SBAppStatusBarSettings *settings;
@property (nonatomic) _Bool shouldDrawStatusBarInsideSceneView;
@property (nonatomic, readonly) unsigned long long level;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_notifyObserversDidUpdate;
- (id)initWithStatusBarSettings:(id)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3;
- (void)_notifyObserversDidInvalidate;
- (id)initWithStatusBarHidden:(_Bool)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3;

@end
