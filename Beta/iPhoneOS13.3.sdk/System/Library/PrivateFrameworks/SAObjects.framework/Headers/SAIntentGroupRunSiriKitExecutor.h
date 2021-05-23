/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString, SAIntentGroupProtobufMessage, SAIntentGroupSiriKitAppSelectionState, SAIntentGroupSiriKitListPosition, SAIntentGroupSiriKitMetrics, SAIntentGroupSiriKitRemoteExecution;

@interface SAIntentGroupRunSiriKitExecutor : SABaseClientBoundCommand

@property (retain, nonatomic) SAIntentGroupSiriKitAppSelectionState *appSelectionState;
@property (copy, nonatomic) NSString *confirmationState;
@property (nonatomic) _Bool directAction;
@property (copy, nonatomic) NSString *goalID;
@property (copy, nonatomic) NSString *intentAsJSON;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentAsProto;
@property (copy, nonatomic) NSString *intentTypeName;
@property (copy, nonatomic) NSArray *parameterMetadata;
@property (copy, nonatomic) NSArray *parameterPrompts;
@property (copy, nonatomic) NSString *parentGoalID;
@property (retain, nonatomic) SAIntentGroupSiriKitListPosition *readingListPosition;
@property (retain, nonatomic) SAIntentGroupSiriKitRemoteExecution *remoteExecution;
@property (nonatomic) _Bool requiresConditionalMultiUserGrounding;
@property (retain, nonatomic) SAIntentGroupSiriKitMetrics *siriKitMetrics;
@property (copy, nonatomic) NSString *userInitiatedAction;
@property (copy, nonatomic) NSString *usoVerb;

+ (id)runSiriKitExecutor;
+ (id)runSiriKitExecutorWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
