/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber, NSString;

@interface SANPSetVolumeLevel : SABaseClientBoundCommand

@property (nonatomic) _Bool acknowledgedExceedingVolumeLimit;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSNumber *volumeValue;

+ (id)setVolumeLevel;
+ (id)setVolumeLevelWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
