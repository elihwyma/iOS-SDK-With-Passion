/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@interface SBFAuthenticationAssertionTracker : NSObject

{
    struct __MKBAssertion *_mkbAssertion;
    NSHashTable *_assertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addAssertion:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)removeAssertion:(id)arg1;
- (_Bool)hasActiveAssertions;
- (_Bool)isAssertionValid:(id)arg1;
- (id)mkbAssertionOptions;

@end
