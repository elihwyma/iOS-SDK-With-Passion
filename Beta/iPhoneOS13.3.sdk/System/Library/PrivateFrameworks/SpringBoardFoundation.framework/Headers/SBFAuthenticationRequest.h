/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBFAuthenticationRequest : NSObject

{
    unsigned long long _type;
    long long _source;
    CDUnknownBlockType _handler;
    NSString *_passcode;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) long long source;
@property (copy, nonatomic, readonly) NSString *passcode;
@property (copy, nonatomic, readonly) CDUnknownBlockType handler;

- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)publicDescription;
- (id)_initWithType:(unsigned long long)arg1 source:(long long)arg2 passcode:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initForPasscode:(id)arg1 source:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initForBiometricAuthenticationWithSource:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initForPasscode:(id)arg1 source:(long long)arg2;
- (id)initForBiometricAuthenticationWithSource:(long long)arg1;

@end
