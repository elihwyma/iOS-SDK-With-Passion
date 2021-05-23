/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUIUnlockDevice : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *cancellationCommands;
@property (copy, nonatomic) NSArray *failureCommands;
@property (copy, nonatomic) NSArray *successCommands;

+ (id)unlockDevice;
+ (id)unlockDeviceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
