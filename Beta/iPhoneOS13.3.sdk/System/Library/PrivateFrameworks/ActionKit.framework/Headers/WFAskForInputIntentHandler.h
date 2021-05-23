/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFAskForInputIntentHandler : NSObject

{
    _Bool _resolvedValue;
}

@property (nonatomic) _Bool resolvedValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleAskForInput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveQuestionForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveTypeForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveStringAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveNumberAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveUrlAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveDefaultURLAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveDateAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveTimeAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveDateAndTimeAnswerForAskForInput:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
