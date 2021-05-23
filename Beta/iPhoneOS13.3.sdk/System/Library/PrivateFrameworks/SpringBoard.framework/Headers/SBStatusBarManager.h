/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSHashTable, NSMutableArray, NSString, UIWindow;

@interface SBStatusBarManager : NSObject <Swift>

{
    NSHashTable *_statusBars;
    UIWindow *_recycledStatusBarsContainerWindow;
    NSMutableArray *_recycledStatusBars;
    NSHashTable *_hideStatusBarAssertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)handleStatusBarTapWithEvent:(id)arg1;
- (id)createStatusBarWithReason:(id)arg1 withFrame:(struct CGRect)arg2;
- (_Bool)isFrontMostStatusBarHidden;
- (id)frontMostStatusBarStyleRequest;
- (void)recycleStatusBar:(id)arg1;
- (id)createStatusBarWithReason:(id)arg1;
- (id)acquireHideFrontMostStatusBarAssertionForReason:(id)arg1;
- (id)trailingStatusBarStyleRequest;
- (void)_removeStatusBarContainer:(id)arg1;

@end
