/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class NSString;

@interface SBAppExposeSwitcherModifierEvent : SBSwitcherModifierEvent

{
    NSString *_bundleID;
}

@property (copy, nonatomic, readonly) NSString *bundleID;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithBundleID:(id)arg1;

@end
