/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIDelayedAction, _UIScreenEdgePanRecognizerSettings;

@protocol _UIScreenEdgePanRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizer : NSObject

{
    struct CGRect _screenBounds;
    _Bool _shouldUseGrapeFlags;
    _Bool _hasRecordedData;
    _Bool _hasDoneInitialBackProjectionTest;
    struct CGPoint _initialTouchLocation;
    double _initialTouchTimestamp;
    long long _initialInterfaceOrientation;
    unsigned long long _touchedRegion;
    UIDelayedAction *_recognitionTimer;
    struct CGPoint _lastTouchLocation;
    double _lastTouchTimestamp;
    long long _lastTouchModifier;
    long long _type;
    _Bool _requiresFlatThumb;
    _Bool _recognizeAlongEdge;
    _UIScreenEdgePanRecognizerSettings *_settings;
    unsigned long long _targetEdges;
    long long _state;
    unsigned long long _recognizedRegion;
    id <_UIScreenEdgePanRecognizerDelegate> _delegate;
}

@property (retain, nonatomic) _UIScreenEdgePanRecognizerSettings *settings;
@property (nonatomic, readonly) _Bool hasRecordedData;
@property (nonatomic, readonly) _Bool useGrapeFlags;
@property (nonatomic) _Bool shouldUseGrapeFlags;
@property (nonatomic, readonly) struct CGPoint _lastTouchLocation;
@property (nonatomic) struct CGRect screenBounds;
@property (nonatomic) unsigned long long targetEdges;
@property (nonatomic) _Bool requiresFlatThumb;
@property (nonatomic) _Bool recognizeAlongEdge;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) unsigned long long recognizedRegion;
@property id <_UIScreenEdgePanRecognizerDelegate> delegate;

- (void)dealloc;
- (long long)_type;
- (void)reset;
- (id)initWithType:(long long)arg1;
- (void)_setState:(long long)arg1;
- (unsigned long long)_targetEdges;
- (id)initWithType:(long long)arg1 settings:(id)arg2;
- (void)_incorporateIncrementalSampleAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6;
- (void)_incorporateInitialTouchAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6;
- (void)_idleTimerElapsed:(id)arg1;
- (unsigned long long)touchedEdgesForInterfaceOrientation:(long long)arg1;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6;
- (void)_longPressTimerElapsed:(id)arg1;

@end
