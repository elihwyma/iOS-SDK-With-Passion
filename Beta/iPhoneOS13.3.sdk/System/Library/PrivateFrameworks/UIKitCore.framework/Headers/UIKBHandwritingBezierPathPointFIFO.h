/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBHandwritingPointFIFO.h>

@class NSMutableArray, UIBezierPath;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingBezierPathPointFIFO : UIKBHandwritingPointFIFO

{
    UIBezierPath *_path;
    CDUnknownBlockType _emissionHandler;
    NSMutableArray *_prevPoints;
}

@property (retain, nonatomic) NSMutableArray *prevPoints;
@property (retain, nonatomic) UIBezierPath *path;
@property (copy) CDUnknownBlockType emissionHandler;

- (void)clear;
- (void)flush;
- (void)addPoint:(struct)arg1;
- (id)initWithFIFO:(id)arg1;

@end
