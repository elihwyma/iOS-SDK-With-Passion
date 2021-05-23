/*
 Image: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
 */

#import <Foundation/NSObject.h>

@class CALayer, CAStateController, City, NSMutableArray, NSString;

@interface WUIWeatherCondition : NSObject

{
    CALayer *_rootLayer;
    _Bool _playing;
    _Bool _hidden;
    _Bool _shouldRasterize;
    _Bool _multiCityMode;
    _Bool _isRotating;
    _Bool _forcesCondition;
    City *_city;
    double _alpha;
    double _speed;
    double _timeOffset;
    CALayer *_layer;
    long long _condition;
    unsigned long long _CAMLState;
    NSMutableArray *_gyroLayers;
    CAStateController *_stateController;
    NSString *_loadedFileName;
    long long _forcesNight;
}

@property (retain, nonatomic) NSMutableArray *gyroLayers;
@property (retain, nonatomic) CAStateController *stateController;
@property (retain, nonatomic) NSString *loadedFileName;
@property (nonatomic) _Bool forcesCondition;
@property (nonatomic) long long forcesNight;
@property (weak, nonatomic) City *city;
@property (nonatomic) _Bool playing;
@property (nonatomic) double alpha;
@property (nonatomic) double speed;
@property (nonatomic) double timeOffset;
@property (nonatomic) _Bool hidden;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic) _Bool shouldRasterize;
@property (nonatomic) _Bool multiCityMode;
@property (nonatomic) long long condition;
@property (nonatomic) _Bool isRotating;
@property (nonatomic) unsigned long long CAMLState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)setTime:(float)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (_Bool)_interfaceConsideredPortraitForCAMLLayerWithSize:(struct CGSize)arg1;
- (void)setCAMLLayerStateForInterfaceOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)setCity:(id)arg1 animationDuration:(double)arg2;
- (void)setCondition:(long long)arg1 animationDuration:(double)arg2;
- (void)setCorrectStateForCurrentOrientationAndMode;
- (void)setAlpha:(double)arg1 animationDuration:(double)arg2;
- (_Bool)_interfaceConsideredPortraitForCAMLLayer;
- (void)transitionToSize:(struct CGSize)arg1 animated:(_Bool)arg2;

@end
