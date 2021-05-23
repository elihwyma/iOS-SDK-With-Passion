/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction, NSDate, NSString, TSDInteractiveCanvasController, TSUNoCopyDictionary;

@interface TSDCanvasAnimation : NSObject

{
    NSString *_animationID;
    void *_context;
    id _delegate;
    SEL _willStartSelector;
    SEL _didStopSelector;
    double _duration;
    double _delay;
    NSDate *_startDate;
    CAMediaTimingFunction *_timingFunction;
    float _repeatCount;
    _Bool _repeatAutoreverses;
    TSUNoCopyDictionary *_animationDictionariesForLayers;
    CDUnknownBlockType _completionBlock;
    unsigned int _outstandingAnimationCount;
    _Bool _firstAnimationDidStart;
    _Bool _allAnimationsFinishedBeforeStopping;
    CDUnknownBlockType _filterBlock;
    _Bool _useRepFiltering;
    TSDInteractiveCanvasController *_interactiveCanvasController;
}

@property (retain, nonatomic, readonly) NSString *animationID;
@property (nonatomic, readonly) void *context;
@property (nonatomic) id delegate;
@property (nonatomic) SEL willStartSelector;
@property (nonatomic) SEL didStopSelector;
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) float repeatCount;
@property (nonatomic) _Bool repeatAutoreverses;
@property (nonatomic) _Bool useRepFiltering;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (copy, nonatomic) CDUnknownBlockType filterBlock;
@property (nonatomic, readonly) TSDInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic, readonly) double beginTime;
@property (nonatomic, readonly) NSString *beginTimeMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)animationDidStart:(id)arg1;
- (id)initWithAnimationID:(id)arg1 interactiveCanvasController:(id)arg2 context:(void *)arg3;
- (void)setAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;

@end
