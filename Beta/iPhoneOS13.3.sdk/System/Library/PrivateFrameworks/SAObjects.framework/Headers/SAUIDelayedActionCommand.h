/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAUIDelayedActionCommand : SADomainCommand

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSNumber *timerValue;

+ (id)delayedActionCommand;
+ (id)delayedActionCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
