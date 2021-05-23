/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface AXCyclingView : UIView

{
    _Bool _isMakingNextViewVisible;
    _Bool _shouldSkipMakingNextViewVisible;
    unsigned long long _cycleIndex;
}

@property (nonatomic) unsigned long long cycleIndex;
@property (nonatomic) _Bool isMakingNextViewVisible;
@property (nonatomic) _Bool shouldSkipMakingNextViewVisible;
@property (nonatomic, readonly) NSArray *viewsInCycle;

- (void)didMoveToWindow;
- (void)endCycling;
- (void)beginCycling;
- (void)_updateForCycleIndex;
- (void)_makeNextViewVisible;

@end
