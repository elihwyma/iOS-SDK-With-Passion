/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionSimulatingTouchForceProvider : NSObject

{
    double _targetTouchForce;
    struct CGPoint _location;
    id <UICoordinateSpace> _coordinateSpace;
    _Bool _active;
}

@property (nonatomic, getter=isActive) _Bool active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double touchForce;

- (void)cancelInteraction;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (id)initWithTouchForce:(double)arg1 location:(struct CGPoint)arg2 coordinateSpace:(id)arg3;

@end
