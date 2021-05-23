/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureSwitcherModifier.h>

@interface SBDragAndDropGestureSwitcherModifier : SBGestureSwitcherModifier

{
    _Bool _floatingSwitcherVisible;
    long long _floatingConfiguration;
    long long _interfaceOrientation;
    long long _currentDropAction;
    struct CGPoint _location;
    struct CGRect _platterFrame;
    double _platterScale;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)layoutSettings;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (struct CGRect)containerViewBounds;
- (long long)layoutUpdateMode;
- (id)initWithGestureID:(id)arg1 floatingSwitcherVisible:(_Bool)arg2 floatingConfiguration:(long long)arg3 interfaceOrientation:(long long)arg4;
- (_Bool)_isPlatterPreviewIntersectingFloatingApplication;

@end
