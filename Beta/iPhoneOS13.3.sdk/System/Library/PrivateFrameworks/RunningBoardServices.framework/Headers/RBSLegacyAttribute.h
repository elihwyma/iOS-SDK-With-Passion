/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSLegacyAttribute : RBSAttribute

{
    unsigned long long _reason;
    unsigned long long _requestedReason;
    unsigned long long _flags;
}

@property (nonatomic) unsigned long long requestedReason;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long reason;

+ (id)attributeWithReason:(unsigned long long)arg1 flags:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)succinctDescriptionBuilder;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)_initWithReason:(unsigned long long)arg1 flags:(unsigned long long)arg2;

@end
