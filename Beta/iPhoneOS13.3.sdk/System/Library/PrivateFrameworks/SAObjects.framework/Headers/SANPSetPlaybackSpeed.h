/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SANPSetPlaybackSpeed : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) double scalingFactor;

+ (id)setPlaybackSpeed;
+ (id)setPlaybackSpeedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
