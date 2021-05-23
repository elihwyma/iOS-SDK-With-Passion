/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSError.h>

@interface NSError (RBSErrors)

+ (id)rbs_errorClientNotEntitled:(id)arg1 permanent:(_Bool)arg2;

- (_Bool)rbs_isPermanentFailure;
- (_Bool)rbs_isServiceDenied;

@end
