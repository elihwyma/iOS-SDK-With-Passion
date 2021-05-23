/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class IMAccount;

@interface IMCoreAutomationHook : NSObject

{
    IMAccount *_imessageAccount;
}

@property (readonly) IMAccount *bestiMessageAccount;

+ (id)stringFromAutomationErrorCode:(long long)arg1;

- (id)chatForHandles:(id)arg1 error:(id *)arg2 results:(id)arg3;
- (id)handlesFromStrings:(id)arg1 error:(id *)arg2 results:(id)arg3;
- (id)existingChatForGroupID:(id)arg1 error:(id *)arg2 results:(id)arg3;

@end
