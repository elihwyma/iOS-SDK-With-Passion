/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAPersonAttribute;

@interface SAPhoneClientCoordinationPhoneCall : SABaseClientBoundCommand

@property (retain, nonatomic) SAPersonAttribute *callRecipient;
@property (nonatomic) _Bool emergencyCall;

+ (id)clientCoordinationPhoneCall;
+ (id)clientCoordinationPhoneCallWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
