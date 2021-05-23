/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class NSString;

@interface FBSProcessExecutionStrategy : NSObject <Swift>

{
    NSString *_strategyName;
    long long _schedulingPolicy;
    long long _graphicsPolicy;
    long long _jetsamPolicy;
    _Bool _customPolicy;
    unsigned int _bksReason;
    unsigned int _bksFlags;
}

@property (copy, nonatomic) NSString *strategyName;
@property (nonatomic) long long schedulingPolicy;
@property (nonatomic) long long graphicsPolicy;
@property (nonatomic) long long jetsamPolicy;
@property (nonatomic, getter=isCustomPolicy) _Bool customPolicy;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned int flags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)background;
+ (id)userInteractive;
+ (id)strategyForSchedulingPolicy:(long long)arg1 graphicsPolicy:(long long)arg2 jetsamPolicy:(long long)arg3;
+ (id)userInteractiveWithoutUI;
+ (id)backgroundWithUI;
+ (id)policyWithReason:(unsigned int)arg1 flags:(unsigned int)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
