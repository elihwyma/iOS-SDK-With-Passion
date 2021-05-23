/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFSafetyBlock;

@interface AFConnectionUserInteractionAssertion : NSObject

{
    AFSafetyBlock *_safetyBlock;
}

- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (void)releaseAssertion;

@end
