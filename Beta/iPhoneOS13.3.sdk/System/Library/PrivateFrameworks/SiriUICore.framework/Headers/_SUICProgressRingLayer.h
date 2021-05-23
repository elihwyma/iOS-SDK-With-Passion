/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <SiriUICore/_SUICRingLayer.h>

@interface _SUICProgressRingLayer : _SUICRingLayer

{
    _Bool _spinning;
    double _progress;
}

@property (nonatomic) _Bool spinning;
@property (nonatomic) double progress;

- (id)init;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
