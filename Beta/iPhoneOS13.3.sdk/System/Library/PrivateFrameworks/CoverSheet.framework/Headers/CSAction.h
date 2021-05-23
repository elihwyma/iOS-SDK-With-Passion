/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class SBFLockScreenActionContext;

@interface CSAction : NSObject

{
    long long _type;
    SBFLockScreenActionContext *_context;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) SBFLockScreenActionContext *context;

+ (id)actionWithType:(long long)arg1;
+ (id)actionWithContext:(id)arg1;

- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
