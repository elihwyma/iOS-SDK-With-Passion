/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SACFAbstractClientCommand.h>

@class NSDictionary;

@interface SACFFlowCommand : SACFAbstractClientCommand

@property (copy, nonatomic) NSDictionary *jsDialogScripts;

+ (id)flowCommand;
+ (id)flowCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
