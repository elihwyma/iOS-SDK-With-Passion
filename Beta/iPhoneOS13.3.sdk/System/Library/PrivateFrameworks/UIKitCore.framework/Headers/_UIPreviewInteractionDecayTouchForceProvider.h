/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol UICoordinateSpace, _UIPreviewInteractionTouchForceProviding;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionDecayTouchForceProvider : NSObject

{
    id <_UIPreviewInteractionTouchForceProviding> _touchForceProvider;
    double _initialTouchForce;
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
- (id)initWithTouchForceProvider:(id)arg1;

@end
