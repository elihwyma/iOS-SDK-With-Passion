/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <SpotlightServices/PRSAnonymousPipelineManager.h>

@class PARSession;

@interface PRSAnonymousPipelineManagerSession : PRSAnonymousPipelineManager

{
    PARSession *_session;
}

@property (retain, nonatomic) PARSession *session;

+ (id)sharedManager;

- (id)init;
- (void)sendCustomFeedback:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setPARSession:(id)arg1;

@end
