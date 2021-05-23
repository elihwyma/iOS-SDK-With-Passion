/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBLayoutState.h>

@class NSSet, NSString;

@interface SBMainDisplayLayoutState : SBLayoutState

{
    _Bool _floatingSwitcherVisible;
    long long _spaceConfiguration;
    long long _floatingConfiguration;
    long long _unlockedEnvironmentMode;
    NSString *_bundleIDShowingAppExpose;
    NSSet *_inlineAppExposeOverlayElements;
}

@property (nonatomic, readonly) long long spaceConfiguration;
@property (nonatomic, readonly) long long floatingConfiguration;
@property (nonatomic, readonly) long long unlockedEnvironmentMode;
@property (nonatomic, readonly) NSString *bundleIDShowingAppExpose;
@property (nonatomic, readonly, getter=isFloatingSwitcherVisible) _Bool floatingSwitcherVisible;
@property (nonatomic, readonly) NSSet *inlineAppExposeOverlayElements;

+ (long long)_defaultInterfaceOrientation;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (long long)interfaceOrientation;
- (id)floatingItem;
- (id)visibleFloatingItem;
- (id)inlineAppExposeOverlayElementWithRole:(long long)arg1;
- (id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 elementInterfaceOrientation:(long long)arg3;
- (id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 elementInterfaceOrientation:(long long)arg3 spaceConfiguration:(long long)arg4 floatingConfiguration:(long long)arg5 unlockedEnvironmentMode:(long long)arg6 floatingSwitcherVisible:(_Bool)arg7 bundleIDShowingAppExpose:(id)arg8 inlineAppExposeOverlayElements:(id)arg9;
- (id)_transitionContextForDismissingLeftApplication;
- (id)_transitionContextForResizingToSpaceConfiguration:(long long)arg1;
- (id)_transitionContextForDismissingRightApplication;

@end
