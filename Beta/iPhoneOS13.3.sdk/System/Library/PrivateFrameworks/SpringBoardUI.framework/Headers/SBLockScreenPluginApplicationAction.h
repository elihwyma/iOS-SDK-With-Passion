/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <SpringBoardUI/SBLockScreenPluginAction.h>

@class NSString, NSURL;

@interface SBLockScreenPluginApplicationAction : SBLockScreenPluginAction

{
    NSString *_bundleID;
    NSURL *_url;
    unsigned long long _transitionStyle;
}

@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic, setter=setURL:) NSURL *url;
@property (nonatomic) unsigned long long transitionStyle;

+ (id)actionWithURL:(id)arg1;
+ (id)actionWithBundleID:(id)arg1;

- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)isApplicationAction;

@end
