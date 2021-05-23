/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSString, RBProcess, RBSProcessIdentity;

@interface RBConcreteTarget : NSObject

@property (nonatomic, readonly) RBProcess *process;
@property (copy, nonatomic, readonly) RBSProcessIdentity *identity;
@property (copy, nonatomic, readonly) NSString *environment;
@property (nonatomic, readonly, getter=isSystem) _Bool system;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)systemTarget;
+ (id)targetWithIdentity:(id)arg1 environment:(id)arg2;
+ (id)targetWithProcess:(id)arg1 environment:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)createRBSTarget;

@end
