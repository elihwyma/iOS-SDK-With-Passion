/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSString, RBSAssertionIdentifier;

@protocol OS_xpc_object;

@interface RBSInheritance : NSObject

{
    struct NSString *_endowmentNamespace;
    NSString *_environment;
    NSObject<OS_xpc_object> *_encodedEndowment;
    RBSAssertionIdentifier *_originatingIdentifier;
    unsigned long long _originatingAttributePath;
    unsigned long long _hash;
}

@property (copy, nonatomic, readonly) RBSAssertionIdentifier *originatingIdentifier;
@property (nonatomic, readonly) unsigned long long originatingAttributePath;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *encodedEndowment;
@property (copy, nonatomic, readonly) NSString *endowmentNamespace;
@property (nonatomic, readonly) NSString *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)_initWithNamespace:(id)arg1 environment:(id)arg2 encodedEndowment:(id)arg3 originatingIdentifier:(id)arg4 attributePath:(unsigned long long)arg5;
- (struct NSObject *)endowment;

@end
