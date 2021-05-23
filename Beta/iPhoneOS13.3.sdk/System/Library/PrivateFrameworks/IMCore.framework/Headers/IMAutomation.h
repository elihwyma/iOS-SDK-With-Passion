/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@interface IMAutomation : NSObject

- (_Bool)checkArgumentValidity:(id)arg1 forExpectedNumberOfArguments:(int)arg2;
- (id)startConversationFrom:(id)arg1 andReceiveAt:(id)arg2;
- (id)callIMCoreMethodWithDictionary:(id)arg1;
- (id)IMCoreAutomationPerformOperationWithDictionary:(id)arg1;

@end
