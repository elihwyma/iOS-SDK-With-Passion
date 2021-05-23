/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIKBRTKeyboardTouchObserver : NSObject

{
    int _homeRowOffsetIndex;
    NSArray *_rowOffsets;
    NSArray *_rowXEdges;
    NSArray *_rowYEdgesLeft;
    NSArray *_rowYEdgesRight;
    struct CGPoint _fCenter;
    struct CGPoint _jCenter;
    struct CGSize _keySize;
}

@property (nonatomic) struct CGPoint fCenter;
@property (nonatomic) struct CGPoint jCenter;
@property (nonatomic) struct CGSize keySize;
@property (retain, nonatomic) NSArray *rowOffsets;
@property (nonatomic) int homeRowOffsetIndex;
@property (retain, nonatomic) NSArray *rowXEdges;
@property (retain, nonatomic) NSArray *rowYEdgesLeft;
@property (retain, nonatomic) NSArray *rowYEdgesRight;

- (void)reset;
- (void)removeTouchWithIdentifier:(id)arg1 touchCancelled:(_Bool)arg2;
- (void)addTouchLocation:(struct CGPoint)arg1 withRadius:(double)arg2 withTouchTime:(double)arg3 withIdentifier:(id)arg4;
- (void)moveTouchWithIdentifier:(id)arg1 toLocation:(struct CGPoint)arg2 withRadius:(double)arg3 atTouchTime:(double)arg4;
- (void)updateWithFCenter:(struct CGPoint)arg1 jCenter:(struct CGPoint)arg2 keySize:(struct CGSize)arg3 rowOffsets:(id)arg4 homeRowOffsetIndex:(int)arg5;
- (void)addTouchLocation:(struct CGPoint)arg1 withRadius:(double)arg2 withIdentifier:(id)arg3;
- (void)removeTouchWithIdentifier:(id)arg1;

@end
