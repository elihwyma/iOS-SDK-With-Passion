/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBHandwritingPointFIFO : NSObject

{
    UIKBHandwritingPointFIFO *_nextFIFO;
}

@property (retain, nonatomic) UIKBHandwritingPointFIFO *nextFIFO;

- (void)clear;
- (void)flush;
- (void)addPoint:(struct)arg1;
- (void)emitPoint:(struct)arg1;
- (id)initWithFIFO:(id)arg1;

@end
