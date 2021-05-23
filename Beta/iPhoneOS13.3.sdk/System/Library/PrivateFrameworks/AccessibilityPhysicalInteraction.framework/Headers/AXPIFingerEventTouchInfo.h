/*
 Image: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
 */

#import <Foundation/NSObject.h>

@interface AXPIFingerEventTouchInfo : NSObject

{
    double _force;
    struct CGPoint _normalizedLocation;
}

@property (nonatomic) struct CGPoint normalizedLocation;
@property (nonatomic) double force;

@end
