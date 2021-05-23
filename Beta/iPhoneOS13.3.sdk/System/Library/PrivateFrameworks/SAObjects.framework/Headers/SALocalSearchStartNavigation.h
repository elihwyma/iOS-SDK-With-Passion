/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SALocation;

@interface SALocalSearchStartNavigation : SABaseClientBoundCommand

@property (retain, nonatomic) SALocation *destination;
@property (copy, nonatomic) NSString *directionsType;
@property (retain, nonatomic) SALocation *origin;

+ (id)startNavigation;
+ (id)startNavigationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
