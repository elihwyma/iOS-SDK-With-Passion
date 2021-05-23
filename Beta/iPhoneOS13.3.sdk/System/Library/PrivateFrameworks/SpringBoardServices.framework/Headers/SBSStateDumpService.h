/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSStateDumpService : SBSAbstractSystemService

- (void)requestStateDump:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)enableRemoteStateDumpWithTimeout:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)disableRemoteStateDumpWithCompletion:(CDUnknownBlockType)arg1;

@end
