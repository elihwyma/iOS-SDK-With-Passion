/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingInputSpeedModel : NSObject

{
    NSMutableArray *_recordedIntervals;
    NSMutableArray *_recordedSpeeds;
    double _lastStrokeTimeStamp;
    double _lastTouchTimeStamp;
    struct CGPoint _lastTouchLocation;
    NSMutableArray *_pointsCurrentStroke;
    _Bool _duringStroke;
    _Bool _autoConfirmationEnabled;
    double _minTimeout;
    double _maxTimeout;
    struct CGRect _handwritingFrame;
}

@property (nonatomic, readonly) _Bool autoConfirmationEnabled;
@property (nonatomic, readonly) double minTimeout;
@property (nonatomic, readonly) double maxTimeout;
@property (nonatomic) struct CGRect handwritingFrame;

- (id)init;
- (void)endStroke;
- (double)timeoutForNextPage;
- (void)endCharacter;
- (void)updatePreferences;
- (void)beginStroke;
- (void)addPoint:(struct CGPoint)arg1 timestamp:(double)arg2;
- (double)smoothValueFromArray:(id)arg1;
- (double)speedForCurrentStroke;

@end
