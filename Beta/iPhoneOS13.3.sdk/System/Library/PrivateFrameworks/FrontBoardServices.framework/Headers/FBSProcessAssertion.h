/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class BKSProcessAssertion, FBSProcessExecutionPolicy, NSString;

@protocol FBSProcess;

@interface FBSProcessAssertion : NSObject <Swift>

{
    NSString *_name;
    id <FBSProcess> _process;
    FBSProcessExecutionPolicy *_policy;
    unsigned long long _activationCount;
    _Bool _invalidated;
    BKSProcessAssertion *_assertion;
}

@property (nonatomic, readonly) BKSProcessAssertion *assertion;
@property (nonatomic, readonly) unsigned long long activationCount;
@property (copy, nonatomic, readonly) NSString *name;
@property (weak, nonatomic, readonly) id <FBSProcess> process;
@property (nonatomic, readonly) FBSProcessExecutionPolicy *policy;
@property (nonatomic, readonly, getter=isActivated) _Bool activated;
@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;
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
- (void)deactivate;
- (id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3;

@end
