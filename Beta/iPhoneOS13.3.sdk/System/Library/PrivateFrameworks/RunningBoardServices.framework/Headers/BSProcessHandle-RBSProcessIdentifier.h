/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <BSProcessHandle.h>

@class NSString;

@interface BSProcessHandle (RBSProcessIdentifier)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)matchesProcess:(id)arg1;
- (int)rbs_pid;
- (id)processPredicate;

@end
