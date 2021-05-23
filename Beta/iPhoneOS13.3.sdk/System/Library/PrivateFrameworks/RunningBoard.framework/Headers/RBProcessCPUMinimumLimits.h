/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RBProcessCPUMinimumLimits : NSObject

{
    unsigned long long _percentage;
    unsigned long long _duration;
}

@property (nonatomic, readonly) unsigned long long percentage;
@property (nonatomic, readonly) unsigned long long duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)unionLimit:(id)arg1;
- (id)initWithPercentage:(unsigned long long)arg1 duration:(unsigned long long)arg2;

@end
