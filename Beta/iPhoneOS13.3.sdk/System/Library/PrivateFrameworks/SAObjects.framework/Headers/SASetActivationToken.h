/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData, NSString;

@interface SASetActivationToken : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *activationToken;
@property (copy, nonatomic) NSString *language;

+ (id)setActivationToken;
+ (id)setActivationTokenWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
