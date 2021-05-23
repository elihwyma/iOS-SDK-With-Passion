/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
 */

#import <UIKit/UIView.h>

@class NAUITextStyleDescriptor;

@interface UIView (NAUIAutolayoutDebugging)

@property (retain, nonatomic, setter=naui_setDynamicFontTextStyleDescriptor:) NAUITextStyleDescriptor *naui_dynamicFontTextStyleDescriptor;

+ (void)_naui_beginDebuggingAutolayout;
+ (void)naui_beginDisablingAnimations;
+ (void)naui_endDisablingAnimations;
+ (void)naui_performAnimateableChangesWithAnimationDuration:(double)arg1 setupBlock:(CDUnknownBlockType)arg2 animatablesBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)naui_prepareToAutolayoutProperDescendantsOfView:(id)arg1 inConstraints:(id)arg2;

- (void)naui_reloadDynamicFontWithTextStyleDescriptor:(id)arg1;
- (id)naui_descendantsWithAmbiguousLayout;
- (_Bool)naui_canAnimate;
- (void)naui_showAllViewBoundsRecursively:(_Bool)arg1;
- (void)naui_addAutoLayoutSubview:(id)arg1;
- (_Bool)naui_isProperDescendantOfView:(id)arg1;
- (void)naui_removeConstraint:(id)arg1;
- (void)naui_addConstraint:(id)arg1;
- (void)naui_removeConstraints:(id)arg1;
- (void)naui_addConstraints:(id)arg1;
- (id)_naui_constraintsByNameDictionary:(_Bool)arg1;
- (id)_naui_constraintsNamed:(id)arg1;
- (void)naui_removeConstraintsNamed:(id)arg1;
- (void)naui_performAnimateableConstraintChanges:(CDUnknownBlockType)arg1;
- (void)naui_addAutoLayoutSubviews:(id)arg1;
- (_Bool)naui_replaceConstraint:(id)arg1 withConstraints:(id)arg2;
- (_Bool)naui_replaceConstraints:(id)arg1 withConstraints:(id)arg2;
- (void)naui_setNamedConstraints:(id)arg1 forName:(id)arg2;
- (void)naui_removeNamedConstraints;

@end
