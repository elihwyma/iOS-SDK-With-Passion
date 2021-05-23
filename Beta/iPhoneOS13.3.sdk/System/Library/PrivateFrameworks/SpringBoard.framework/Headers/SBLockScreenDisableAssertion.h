/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardUI/SBUILockScreenDisableAssertion.h>

@class NSString, SBFAuthenticationAssertion;

@interface SBLockScreenDisableAssertion : SBUILockScreenDisableAssertion

{
    NSString *_identifier;
    SBFAuthenticationAssertion *_disableLockAssertion;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithIdentifier:(id)arg1;

@end
