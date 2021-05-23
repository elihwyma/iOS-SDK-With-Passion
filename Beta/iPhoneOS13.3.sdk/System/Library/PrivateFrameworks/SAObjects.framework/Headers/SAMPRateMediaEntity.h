/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMPRateMediaEntity : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *hashedRouteUID;
@property (nonatomic) long long rating;

+ (id)rateMediaEntity;
+ (id)rateMediaEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
