/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFocusEngineFakePanGestureRecognizer : NSObject

{
    long long _state;
    struct CGPoint _digitizerLocation;
    struct CGPoint _velocity;
}

@property (nonatomic) long long state;
@property (nonatomic) struct CGPoint digitizerLocation;
@property (nonatomic) struct CGPoint velocity;

- (struct CGPoint)velocityInView:(id)arg1;
- (struct CGPoint)_digitizerLocation;

@end
