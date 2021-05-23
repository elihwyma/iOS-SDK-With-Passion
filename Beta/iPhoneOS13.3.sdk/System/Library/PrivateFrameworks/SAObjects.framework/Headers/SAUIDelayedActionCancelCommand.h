/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAUIDelayedActionCancelCommand : SADomainCommand

@property (copy, nonatomic) NSString *delayedActionAceId;

+ (id)delayedActionCancelCommand;
+ (id)delayedActionCancelCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
