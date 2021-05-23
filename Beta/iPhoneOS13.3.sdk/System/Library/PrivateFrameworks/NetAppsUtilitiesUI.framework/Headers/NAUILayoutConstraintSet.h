/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
 */

#import <Foundation/NSObject.h>

@class NSArray, UIView;

@interface NAUILayoutConstraintSet : NSObject

{
    UIView *_owningView;
    CDUnknownBlockType _builder;
    NSArray *_constraints;
}

@property (copy, nonatomic) NSArray *constraints;
@property (weak, nonatomic, readonly) UIView *owningView;
@property (copy, nonatomic, readonly) CDUnknownBlockType builder;
@property (nonatomic, readonly, getter=isActive) _Bool active;

- (void)invalidate;
- (void)activateIfNeeded;
- (id)initWithOwningView:(id)arg1 constraintBuilder:(CDUnknownBlockType)arg2;
- (void)updateConstraintConstants;

@end
