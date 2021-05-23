/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSString;

@interface UIScrollTestToBottomParameters : NSObject

{
    int _iterations;
    int _delta;
    int _scrollLength;
    float _startOffset;
    NSString *_currentTest;
    int _axis;
    CADisplayLink *_displayLink;
}

@property (nonatomic) int iterations;
@property (nonatomic) int delta;
@property (nonatomic) int scrollLength;
@property (nonatomic) float startOffset;
@property (nonatomic, readonly) float endOffset;
@property (nonatomic) int axis;
@property (retain, nonatomic) NSString *currentTest;
@property (retain, nonatomic) CADisplayLink *displayLink;

- (void)dealloc;
- (id)initWithName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 startOffset:(float)arg5 scrollAxis:(int)arg6;

@end
