/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBHandwritingPointFIFO.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingBoxcarFilterPointFIFO : UIKBHandwritingPointFIFO

{
    NSMutableArray *_prevPoints;
    unsigned long long _width;
}

@property (retain, nonatomic) NSMutableArray *prevPoints;
@property (nonatomic) unsigned long long width;

- (void)clear;
- (void)flush;
- (void)addPoint:(struct)arg1;
- (void)emitAveragedPoint;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2;

@end
