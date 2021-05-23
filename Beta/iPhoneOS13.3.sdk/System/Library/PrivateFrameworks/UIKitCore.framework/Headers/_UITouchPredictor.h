/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableArray, _UIValuePredictor;

__attribute__((visibility("hidden")))
@interface _UITouchPredictor : NSObject <Swift>

{
    NSMutableArray *_predictions;
    _Bool _predictionsValid;
    _UIValuePredictor *_xValuePredictor;
    _UIValuePredictor *_yValuePredictor;
    _UIValuePredictor *_angleValuePredictor;
    _UIValuePredictor *_azimuthValuePredictor;
    _UIValuePredictor *_forceValuePredictor;
    double _averageTouchInterval;
    double _lastTouchTimestamp;
    double _numPredictionsBuffer[5];
    long long _numPredictionsBufferCount;
}

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addTouch:(id)arg1;
- (id)predictedTouchesForTouch:(id)arg1;
- (id)_xValuePredictor;
- (id)_yValuePredictor;
- (id)_angleValuePredictor;
- (id)_azimuthValuePredictor;
- (id)_forceValuePredictor;
- (id)initWithTouchPredictor:(id)arg1;
- (void)_updatePredictionsForTouch:(id)arg1 weight:(double)arg2;
- (unsigned long long)_numPredictionsAtIndex:(unsigned long long)arg1 hardLimit:(unsigned long long *)arg2;
- (unsigned long long)_dampenedNumPredictionsAtIndex:(unsigned long long)arg1;
- (id)_predictedTouchesAtIndex:(unsigned long long)arg1 forTouch:(id)arg2;
- (id)descriptionFromIndex:(int)arg1 toIndex:(int)arg2 includeHeader:(_Bool)arg3 includeDetailedConfidence:(_Bool)arg4;

@end
