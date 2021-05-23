/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class CADisplayLink, NSString;

@interface UIScrollTestParameters : NSObject <Swift>

{
    int _axis;
    NSString *_testName;
    long long _iterations;
    double _delta;
    double _length;
    CDUnknownBlockType _extraResultsBlock;
    double _startOffset;
    CADisplayLink *_displayLink;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic) double startOffset;
@property (nonatomic, readonly) double endOffset;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (copy, nonatomic) NSString *testName;
@property (nonatomic) long long iterations;
@property (nonatomic) double delta;
@property (nonatomic) double length;
@property (nonatomic) int axis;
@property (copy, nonatomic) CDUnknownBlockType extraResultsBlock;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
