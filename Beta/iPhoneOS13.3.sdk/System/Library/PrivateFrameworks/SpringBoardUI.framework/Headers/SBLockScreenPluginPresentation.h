/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

#import <SpringBoardUI/Swift-Protocol.h>

@class _UILegibilitySettings;

@interface SBLockScreenPluginPresentation : NSObject <Swift>

{
    _UILegibilitySettings *legibilitySettings;
    struct UIEdgeInsets suggestedContentInsets;
}

@property (nonatomic) struct UIEdgeInsets suggestedContentInsets;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
