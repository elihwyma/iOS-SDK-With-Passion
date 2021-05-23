/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SARemoteDevice;

@protocol SAHandoffPayload;

@interface SAInitiateHandoffOnCompanion : SABaseClientBoundCommand

@property (retain, nonatomic) id <SAHandoffPayload> handoffPayload;
@property (copy, nonatomic) NSString *lockScreenText;
@property (copy, nonatomic) NSString *lockScreenTextDialogIdentifier;
@property (copy, nonatomic) NSString *notificationText;
@property (copy, nonatomic) NSString *notificationTextDialogIdentifier;
@property (retain, nonatomic) SARemoteDevice *targetDevice;

+ (id)initiateHandoffOnCompanion;
+ (id)initiateHandoffOnCompanionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
