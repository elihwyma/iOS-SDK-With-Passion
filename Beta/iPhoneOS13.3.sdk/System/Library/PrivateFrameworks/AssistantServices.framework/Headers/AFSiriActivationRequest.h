/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFSiriActivationContext;

@interface AFSiriActivationRequest : NSObject

{
    AFSiriActivationContext *_context;
}

- (id)initWithContext:(id)arg1;
- (void)performRequestWithResultHandler:(CDUnknownBlockType)arg1;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;

@end
