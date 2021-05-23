/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface _DECFeedbackBuilder : NSObject

{
    CDUnknownBlockType _feedbackHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithFeedbackHandler:(CDUnknownBlockType)arg1;
- (void)receiveFeedback:(id)arg1 result:(id)arg2 metadata:(id)arg3 engaged:(_Bool)arg4;

@end
