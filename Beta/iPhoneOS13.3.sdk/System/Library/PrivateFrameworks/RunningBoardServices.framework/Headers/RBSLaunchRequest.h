/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <RunningBoardServices/RBSRequest.h>

@class NSString, RBSLaunchContext;

@interface RBSLaunchRequest : RBSRequest

{
    RBSLaunchContext *_context;
}

@property (nonatomic, readonly) RBSLaunchContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContext:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (_Bool)execute:(out id *)arg1 error:(out id *)arg2;
- (_Bool)execute:(out id *)arg1;
- (_Bool)execute:(out id *)arg1 assertion:(out id *)arg2 error:(out id *)arg3;

@end
