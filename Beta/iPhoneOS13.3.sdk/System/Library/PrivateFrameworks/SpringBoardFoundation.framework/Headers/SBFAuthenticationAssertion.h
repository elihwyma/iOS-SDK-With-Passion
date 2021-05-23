/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, SBFUserAuthenticationController;

@interface SBFAuthenticationAssertion : NSObject

{
    _Bool _activated;
    _Bool _invalidated;
    long long _type;
    NSString *_identifier;
    SBFUserAuthenticationController *_controller;
}

@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (weak, nonatomic, readonly) SBFUserAuthenticationController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)activate;
- (id)publicDescription;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 withController:(id)arg3;

@end
