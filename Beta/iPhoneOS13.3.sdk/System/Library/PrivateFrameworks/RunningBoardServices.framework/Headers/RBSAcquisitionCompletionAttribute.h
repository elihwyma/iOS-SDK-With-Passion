/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSAcquisitionCompletionAttribute : RBSAttribute

{
    unsigned long long _policy;
}

@property (nonatomic, readonly) unsigned long long policy;

+ (id)attributeWithCompletionPolicy:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)succinctDescriptionBuilder;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)_initWithCompletionPolicy:(unsigned long long)arg1;

@end
