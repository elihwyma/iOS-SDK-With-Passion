/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AceObject;

@protocol SAAceCommand;

@interface AFInterstitialCommandWrapper : NSObject

{
    CDUnknownBlockType _completion;
    AceObject<SAAceCommand> *_command;
    AceObject<SAAceCommand> *_defaultReply;
}

@property (nonatomic, readonly) AceObject<SAAceCommand> *command;
@property (nonatomic, readonly) AceObject<SAAceCommand> *defaultReply;

- (void)dealloc;
- (void)dispatchCompletionWithReply:(id)arg1 error:(id)arg2;
- (id)initWithCommand:(id)arg1 defaultReply:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
