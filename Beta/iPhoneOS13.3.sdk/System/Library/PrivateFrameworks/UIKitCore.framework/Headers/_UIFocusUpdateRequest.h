/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIFocusAnimationCoordinator, UIFocusSystem, _UIFocusInputDeviceInfo;

@protocol UIFocusEnvironment;

@interface _UIFocusUpdateRequest : NSObject <Swift>

{
    _Bool _allowsDeferral;
    _Bool _isFocusRemovalRequest;
    _Bool _shouldPlayFocusSound;
    _Bool _allowsFocusingCurrentItem;
    UIFocusAnimationCoordinator *_animationCoordinator;
    UIFocusSystem *_focusSystem;
    id <UIFocusEnvironment> _environment;
}

@property (nonatomic, readonly) _Bool isFocusRemovalRequest;
@property (nonatomic) _Bool shouldPlayFocusSound;
@property (nonatomic) _Bool allowsFocusingCurrentItem;
@property (retain, nonatomic) UIFocusAnimationCoordinator *animationCoordinator;
@property (weak, nonatomic, readonly) id <UIFocusEnvironment> environment;
@property (nonatomic) _Bool allowsDeferral;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIFocusSystem *focusSystem;
@property (nonatomic, readonly) _Bool requiresNextFocusedItem;
@property (nonatomic, readonly) _Bool requiresEnvironmentValidation;
@property (nonatomic, readonly) _Bool allowsFocusRestoration;
@property (nonatomic, readonly) _Bool shouldPerformHapticFeedback;
@property (nonatomic, readonly) _UIFocusInputDeviceInfo *inputDeviceInfo;

+ (id)requestForRemovingFocusInFocusSystem:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithFocusSystem:(id)arg1 environment:(id)arg2;
- (void)cacheCurrentFocusSystem;
- (_Bool)isValidInFocusSystem:(id)arg1;
- (_Bool)canMergeWithRequest:(id)arg1;
- (id)requestByMergingWithRequest:(id)arg1;
- (id)requestByRedirectingRequestToEnvironment:(id)arg1;

@end
