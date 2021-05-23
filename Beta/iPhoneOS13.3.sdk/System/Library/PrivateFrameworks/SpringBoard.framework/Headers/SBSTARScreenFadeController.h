/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CAContext;

@interface SBSTARScreenFadeController : NSObject

{
    double _lastBrightnessValue;
    CAContext *_context;
}

- (void)dealloc;
- (void)animateToBrightness:(double)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithBrightness:(double)arg1;

@end
