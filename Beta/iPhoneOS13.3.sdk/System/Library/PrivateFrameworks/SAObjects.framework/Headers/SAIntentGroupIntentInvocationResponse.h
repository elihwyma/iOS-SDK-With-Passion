/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAIntentGroupIntentInvocationResponse : SABaseClientBoundCommand

@property (nonatomic) _Bool backgroundLaunch;
@property (copy, nonatomic) NSString *launchId;
@property (copy, nonatomic) NSArray *parameters;
@property (copy, nonatomic) NSString *utterance;

+ (id)intentInvocationResponse;
+ (id)intentInvocationResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
