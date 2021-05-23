/*
 Image: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
 */

#import <Foundation/NSObject.h>

@interface AXPIFingerEventSender : NSObject

{
    _Bool _shouldAddRealEventFlag;
}

@property (nonatomic) _Bool shouldAddRealEventFlag;

- (void)performCancel;
- (id)_assignFingerIdentifiersToTouches:(id)arg1;
- (void)performDownWithTouchesByFingerIdentifier:(id)arg1;
- (void)_sendHandEvent:(unsigned int)arg1 touchesByFingerIdentifier:(id)arg2;
- (void)performMoveWithTouchesByFingerIdentifier:(id)arg1;
- (void)performUpWithTouchesByFingerIdentifier:(id)arg1;
- (void)performDownWithTouches:(id)arg1;
- (void)performMoveWithTouches:(id)arg1;
- (void)performUpWithTouches:(id)arg1;

@end
