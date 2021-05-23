/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class NSArray, NSString;

@interface FBSProcessWatchdogPolicy : NSObject <Swift>

{
    NSString *_name;
    NSArray *_provisions;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *provisions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)policyWithProvisions:(id)arg1;
+ (id)policyWithName:(id)arg1 forProvisions:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
