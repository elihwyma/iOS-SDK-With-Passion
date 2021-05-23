/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@protocol SASHeaterDelegate;

@interface SASHeater : NSObject

{
    _Bool _predictedRecordRouteIsZLL;
    id <SASHeaterDelegate> _delegate;
    double _preparationStartTime;
    NSTimer *_defrostTimer;
    NSTimer *_preheatTimer;
}

@property (nonatomic, getter=_preparationStartTime, setter=_setPreparationStartTime:) double preparationStartTime;
@property (nonatomic) _Bool predictedRecordRouteIsZLL;
@property (retain, nonatomic) NSTimer *defrostTimer;
@property (retain, nonatomic) NSTimer *preheatTimer;
@property (weak, nonatomic) id <SASHeaterDelegate> delegate;

- (void)_cancelPreparation;
- (void)_suggestPreheat;
- (void)_suggestDefrost;
- (void)_updatePredictedRouteIsZLL;
- (void)prepareForUseAfterTimeInterval:(double)arg1;
- (void)cancelPreparation;

@end
