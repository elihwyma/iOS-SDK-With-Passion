/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@protocol SAHandoffPayload;

@interface SASetHandoffPayload : SABaseClientBoundCommand

@property (retain, nonatomic) id <SAHandoffPayload> handoffPayload;

+ (id)setHandoffPayload;
+ (id)setHandoffPayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
