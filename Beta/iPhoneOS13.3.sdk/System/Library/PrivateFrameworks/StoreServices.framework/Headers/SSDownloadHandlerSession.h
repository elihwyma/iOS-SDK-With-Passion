/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSDownloadSession.h>

@class NSNumber, NSString;

@interface SSDownloadHandlerSession : SSDownloadSession

{
    NSString *_downloadPhase;
    NSNumber *_duetTimeoutInterval;
}

@property (readonly) NSString *downloadPhase;
@property (readonly) NSNumber *duetTimeoutInterval;
@property _Bool blocksOtherDownloads;
@property _Bool canBePaused;
@property _Bool needsPowerAssertion;

- (void)dealloc;
- (void)setPercentComplete:(float)arg1;
- (void)releaseSessionControl;
- (void)setStatusDescription:(id)arg1;
- (id)_initWithMessage:(id)arg1 controlConnection:(id)arg2;
- (void)_finishWithType:(int)arg1 error:(id)arg2;
- (void)_setBool:(_Bool)arg1 forSessionProperty:(const char *)arg2;
- (void)disavowSessionWithError:(id)arg1;
- (void)finishSessionWithSuccess:(_Bool)arg1 error:(id)arg2;

@end
