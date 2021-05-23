/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIKBRTDecayingObject.h>

__attribute__((visibility("hidden")))
@interface _UIKBRTDecayingOffset : _UIKBRTDecayingObject

{
    _Bool _limitMovement;
    struct CGPoint _offset;
}

@property (nonatomic, readonly) struct CGPoint offset;
@property (nonatomic, readonly) struct CGPoint originalOffset;

- (void)reset;
- (id)initWithTimeoutDuration:(double)arg1 limitMovement:(_Bool)arg2;
- (void)updateOffsetTo:(struct CGPoint)arg1;

@end
