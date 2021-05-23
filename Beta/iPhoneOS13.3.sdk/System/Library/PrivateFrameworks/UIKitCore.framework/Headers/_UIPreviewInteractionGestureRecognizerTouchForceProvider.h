/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UITouchForceGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionGestureRecognizerTouchForceProvider : NSObject <Swift>

{
    _Bool _active;
    UITouchForceGestureRecognizer *_gestureRecognizer;
}

@property (nonatomic, getter=isActive) _Bool active;
@property (retain, nonatomic) UITouchForceGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double touchForce;

- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleGestureRecognizer:(id)arg1;
- (void)cancelInteraction;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (id)initWithGestureRecognizer:(id)arg1;
- (id)initWithView:(id)arg1 configuration:(CDUnknownBlockType)arg2;

@end
