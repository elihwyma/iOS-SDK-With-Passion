/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSNumber;

@interface SALocalSearchNavigationPromptManeuver : SADomainCommand

@property (copy, nonatomic) NSNumber *maneuverIndex;

+ (id)navigationPromptManeuver;
+ (id)navigationPromptManeuverWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
