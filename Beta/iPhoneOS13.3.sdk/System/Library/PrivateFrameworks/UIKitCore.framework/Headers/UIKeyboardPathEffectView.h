/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class CADisplayLink, NSMutableArray, NSMutableIndexSet, UIKBHandwritingQuadCurvePointFIFO;

__attribute__((visibility("hidden")))
@interface UIKeyboardPathEffectView : UIView

{
    _Bool _increasedContrastEnabled;
    _Bool _done;
    UIKBHandwritingQuadCurvePointFIFO *_pointInterpolator;
    double _startTime;
    NSMutableArray *_paths;
    NSMutableIndexSet *_pointDecayQueue;
    CADisplayLink *_pointDecayDisplayLink;
}

@property (retain, nonatomic) UIKBHandwritingQuadCurvePointFIFO *pointInterpolator;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSMutableArray *paths;
@property (nonatomic) _Bool increasedContrastEnabled;
@property (nonatomic) _Bool done;
@property (retain, nonatomic) NSMutableIndexSet *pointDecayQueue;
@property (retain, nonatomic) CADisplayLink *pointDecayDisplayLink;

- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;
- (long long)keyboardAppearance;
- (int)textEffectsVisibilityLevel;
- (id)_currentPath;
- (void)addPoint:(struct CGPoint)arg1 force:(double)arg2 timestamp:(double)arg3;
- (void)buildOut;
- (void)_displayLinkFired:(id)arg1;
- (void)_addDrawingPoint:(struct CGPoint)arg1 force:(double)arg2 sentinel:(_Bool)arg3;
- (void)accessibilityValueChanged:(id)arg1;
- (id)_pushNewPath;
- (void)_clearPointInterpolators;
- (CDStruct_d2b197d1)_currentThemeSettings;

@end
