/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class FBSProcessExecutionStrategy, NSArray, NSString;

@interface FBSProcessExecutionPolicy : NSObject <Swift>

{
    FBSProcessExecutionStrategy *_strategy;
    NSArray *_provisions;
}

@property (copy, nonatomic) FBSProcessExecutionStrategy *strategy;
@property (copy, nonatomic) NSArray *provisions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)policyForStrategy:(id)arg1 withProvisions:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
