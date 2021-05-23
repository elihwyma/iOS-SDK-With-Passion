/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SADPDevicePlaySound : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSArray *devices;

+ (id)devicePlaySound;
+ (id)devicePlaySoundWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
