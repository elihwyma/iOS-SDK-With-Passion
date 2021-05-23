/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SANPGetVolumeLevel : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)getVolumeLevel;
+ (id)getVolumeLevelWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
