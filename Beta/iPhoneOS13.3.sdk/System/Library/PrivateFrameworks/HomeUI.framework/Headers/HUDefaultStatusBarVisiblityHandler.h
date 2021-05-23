/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HUDefaultStatusBarVisiblityHandler : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isStatusBarHidden) _Bool statusBarHidden;

- (id)_statusBarAnimationParametersForAnimationSettings:(id)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 withAnimationSettings:(id)arg2;

@end
