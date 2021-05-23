/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFConditionLock, NSDictionary, NSError;

@interface _MFDAResolveRecipientsConsumer : NSObject

{
    MFConditionLock *_conditionLock;
    NSDictionary *_resolvedRecipientsByEmailAddress;
    NSError *_error;
}

@property (readonly) NSError *error;

- (id)init;
- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (id)waitForResolvedRecipients;
- (void)resolvedRecipientsByEmailAddress:(id)arg1;

@end
