/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBAppLayout;

@interface SBSwitcherTransitionRequest : NSObject <Swift>

{
    SBAppLayout *_appLayout;
    long long _appLayoutEnvironment;
    long long _unlockedEnvironmentMode;
    long long _preferredInterfaceOrientation;
    long long _floatingConfiguration;
    long long _floatingSwitcherVisible;
    long long _dismissInlineAppExpose;
    long long _animationDisabled;
    long long _source;
}

@property (retain, nonatomic) SBAppLayout *appLayout;
@property (nonatomic) long long appLayoutEnvironment;
@property (nonatomic) long long unlockedEnvironmentMode;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (nonatomic) long long floatingConfiguration;
@property (nonatomic) long long floatingSwitcherVisible;
@property (nonatomic) long long dismissInlineAppExpose;
@property (nonatomic) long long animationDisabled;
@property (nonatomic) long long source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)requestForActivatingAppLayout:(id)arg1;
+ (id)requestForActivatingHomeScreen;
+ (id)requestForActivatingAppSwitcher;
+ (id)requestForActivatingFloatingSwitcher;
+ (id)requestForDeactivatingFloatingSwitcher;
+ (id)requestForStashingFloatingApplication;
+ (id)requestForDismissingInlineSwitcher;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
