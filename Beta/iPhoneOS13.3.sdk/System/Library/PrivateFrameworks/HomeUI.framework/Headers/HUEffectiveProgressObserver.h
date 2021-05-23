/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@protocol NACancelable;

@interface HUEffectiveProgressObserver : NSObject

{
    CDUnknownBlockType _observerBlock;
    double _targetEffectiveProgress;
    id <NACancelable> _timerCancellationToken;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType observerBlock;
@property (nonatomic, readonly) double targetEffectiveProgress;
@property (retain, nonatomic) id <NACancelable> timerCancellationToken;

- (id)initWithTargetEffectiveProgress:(double)arg1 observerBlock:(CDUnknownBlockType)arg2;

@end
