/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, NSString, SBFWindow;

@interface _SBFKeyWindowStack : NSObject

{
    SBFWindow *_expectedKeyWindow;
    NSMutableOrderedSet *_windowStack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)noteWindowDeallocated:(id)arg1;
- (void)popKeyWindow:(id)arg1;
- (_Bool)pushKeyWindow:(id)arg1;
- (void)noteWindowHidden:(id)arg1;
- (void)noteWindowUnhidden:(id)arg1;
- (void)_keyWindowDidChangeNotification:(id)arg1;
- (id)_evaluateForNewKeyWindowWithReason:(id)arg1;
- (void)popKeyWindow:(id)arg1 reason:(id)arg2;
- (_Bool)_isWindowEligibleForKeyness:(id)arg1;
- (id)expectedKeyWindow;

@end
