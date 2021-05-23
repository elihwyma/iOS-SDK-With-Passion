/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface TSWPIterativeAttachmentPositioningState : NSObject

{
    unsigned long long _passCount;
    NSArray *_passPositions;
    double _mismatch;
    double _smallestMismatch;
    struct CGPoint _position;
    struct CGPoint _bestPosition;
}

@property (nonatomic, readonly) unsigned long long passCount;
@property (nonatomic, readonly) NSArray *passPositions;
@property (nonatomic, readonly) struct CGPoint position;
@property (nonatomic, readonly) double mismatch;
@property (nonatomic, readonly) double smallestMismatch;
@property (nonatomic, readonly) struct CGPoint bestPosition;

- (id)init;
- (void)dealloc;
- (_Bool)hasLoopInLastPasses;
- (void)setPosition:(struct CGPoint)arg1 mismatch:(double)arg2;
- (void)setPosition:(struct CGPoint)arg1 mismatch:(double)arg2 afterLoop:(_Bool)arg3;

@end
