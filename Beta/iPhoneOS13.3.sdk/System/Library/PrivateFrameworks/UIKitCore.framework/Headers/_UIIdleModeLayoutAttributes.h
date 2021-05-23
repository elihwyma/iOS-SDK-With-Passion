/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@interface _UIIdleModeLayoutAttributes : NSObject

{
    _Bool _wantsDimmingOverlay;
    double _alphaOffset;
    struct CGPoint _centerOffset;
    struct CGAffineTransform _transform;
}

@property (nonatomic) struct CGPoint centerOffset;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) double alphaOffset;
@property (nonatomic) _Bool wantsDimmingOverlay;

- (id)init;

@end
