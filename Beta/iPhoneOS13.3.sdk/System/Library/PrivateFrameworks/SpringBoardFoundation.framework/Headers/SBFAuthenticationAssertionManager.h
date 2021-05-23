/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, SBFAuthenticationAssertionTracker;

@interface SBFAuthenticationAssertionManager : NSObject

{
    SBFAuthenticationAssertionTracker *_preventLockTracker;
    SBFAuthenticationAssertionTracker *_transientTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addAssertion:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)removeAssertion:(id)arg1;
- (_Bool)hasActiveAssertions;
- (_Bool)isAssertionValid:(id)arg1;

@end
