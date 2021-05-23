/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString;

@interface SANPSetRepeatMode : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSString *repeatMode;

+ (id)setRepeatMode;
+ (id)setRepeatModeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
