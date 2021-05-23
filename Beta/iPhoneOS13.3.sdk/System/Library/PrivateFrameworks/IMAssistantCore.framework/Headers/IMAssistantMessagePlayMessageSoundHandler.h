/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <IMAssistantCore/IMAssistantMessageQueryHandler.h>

@class NSString;

@interface IMAssistantMessagePlayMessageSoundHandler : IMAssistantMessageQueryHandler

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handlePlayMessageSound:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)playSendSoundForMessageGUID:(id)arg1;

@end
