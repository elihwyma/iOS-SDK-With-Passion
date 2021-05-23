/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASessionValidationFailed : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *errorCode;

+ (id)sessionValidationFailed;
+ (id)sessionValidationFailedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
