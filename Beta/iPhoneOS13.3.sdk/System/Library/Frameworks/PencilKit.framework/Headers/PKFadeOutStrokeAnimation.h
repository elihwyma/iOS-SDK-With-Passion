/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class PKStroke, UIColor;

@interface PKFadeOutStrokeAnimation : NSObject

{
    UIColor *_startColor;
    PKStroke *_stroke;
    double _startTime;
    double _duration;
}

@property (nonatomic, readonly) PKStroke *stroke;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double duration;

- (id)newStrokeAtTime:(double)arg1;
- (_Bool)isDoneAtTime:(double)arg1;
- (id)initWithStroke:(id)arg1 startTime:(double)arg2 duration:(double)arg3;

@end
