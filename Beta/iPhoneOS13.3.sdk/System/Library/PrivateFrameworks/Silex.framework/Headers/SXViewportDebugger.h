/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXViewport, SXViewportDebuggerOverlayView;

@interface SXViewportDebugger : NSObject

{
    SXViewport *_viewport;
    SXViewportDebuggerOverlayView *_dynamicBoundsView;
    SXViewportDebuggerOverlayView *_appearStateIndicator;
}

@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic, readonly) SXViewportDebuggerOverlayView *dynamicBoundsView;
@property (nonatomic, readonly) SXViewportDebuggerOverlayView *appearStateIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)update;
- (id)initWithViewport:(id)arg1;
- (void)presentOnView:(id)arg1;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (id)colorForAppearState:(unsigned long long)arg1;

@end
