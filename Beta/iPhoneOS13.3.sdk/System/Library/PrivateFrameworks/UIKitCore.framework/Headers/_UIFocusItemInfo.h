/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, UIScreen, UIView, _UIFocusRegion;

@protocol UIFocusItem;

__attribute__((visibility("hidden")))
@interface _UIFocusItemInfo : NSObject <Swift>

{
    struct {
        unsigned int hasResolvedFocusSound:1;
        unsigned int hasResolvedFocusSoundPan:1;
        unsigned int hasResolvedFocusTouchSensitivityStyle:1;
        unsigned int hasResolvedFocusMovementFlippedHorizontally:1;
        unsigned int hasResolvedFocusedRegion:1;
    } _flags;
    _Bool _focusMovementFlippedHorizontally;
    NSArray *_ancestorScrollableContainers;
    long long _inheritedFocusMovementStyle;
    long long _focusSound;
    double _focusSoundPan;
    long long _focusTouchSensitivityStyle;
    _UIFocusRegion *_focusedRegion;
    id <UIFocusItem> _item;
    UIView *_containingView;
}

@property (weak, nonatomic, readonly) id <UIFocusItem> item;
@property (nonatomic, readonly) _Bool itemIsKindOfView;
@property (weak, nonatomic, readonly) UIView *containingView;
@property (copy, nonatomic, readonly) NSArray *ancestorScrollableContainers;
@property (weak, nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) long long inheritedFocusMovementStyle;
@property (nonatomic, readonly) long long focusSound;
@property (nonatomic, readonly) double focusSoundPan;
@property (nonatomic, readonly) long long focusTouchSensitivityStyle;
@property (nonatomic, readonly, getter=isFocusMovementFlippedHorizontally) _Bool focusMovementFlippedHorizontally;
@property (nonatomic, readonly) _UIFocusRegion *focusedRegion;

+ (id)infoWithItem:(id)arg1;
+ (id)infoWithView:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithItem:(id)arg1 containingView:(id)arg2;
- (id)_focusedRegionInCoordinateSpace:(id)arg1;
- (struct CGRect)focusedRectInCoordinateSpace:(id)arg1;
- (void)invalidateFocusedRegion;

@end
