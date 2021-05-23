/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, UIInputWindowController;

__attribute__((visibility("hidden")))
@interface UIInputWindowControllerHosting : NSObject

{
    NSMutableArray *_hostingItems;
    unsigned long long _currentState;
    _Bool _requiresConstraintUpdate;
    int _extraHostsRequired;
    UIInputWindowController *_owner;
}

@property (nonatomic) int extraHostsRequired;
@property (weak, nonatomic) UIInputWindowController *owner;
@property (retain, nonatomic, readonly) NSArray *allHostingItems;
@property (nonatomic) _Bool requiresConstraintUpdate;

- (void)layoutIfNeeded;
- (void)setNeedsLayout;
- (void)removeAllAnimations;
- (id)initWithHost:(id)arg1;
- (void)updateViewConstraints;
- (struct CGRect)visibleFrame;
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;
- (void)updateViewSizingConstraints;
- (void)unloadForPlacement;
- (void)reloadForPlacement;
- (id)itemForPurpose:(unsigned long long)arg1;
- (struct UIEdgeInsets)_inputViewPadding;
- (void)updateConstraintInsets;
- (void)clearInputViewEdgeConstraints;
- (void)resetBackdropHeight;
- (void)_updateBackdropViews;
- (void)clearInputAssistantViewEdgeConstraints;
- (void)clearInputAccessoryViewEdgeConstraints;
- (void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2;
- (void)initializeTranslateGestureRecognizerIfNecessary;
- (void)updateEmptyHeightConstraint;
- (void)performForInputAccessoryBackdropViews:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfHost:(id)arg1;
- (id)subPlacementFromPlacement:(id)arg1 forHost:(id)arg2;
- (id)placementForHost:(id)arg1;
- (id)expectedPlacementForHost:(id)arg1;
- (_Bool)host:(id)arg1 isForPurpose:(unsigned long long)arg2;

@end
