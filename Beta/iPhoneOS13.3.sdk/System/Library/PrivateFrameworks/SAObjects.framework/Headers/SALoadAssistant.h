/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSData, NSString;

@interface SALoadAssistant : SABaseCommand <Swift>

@property (copy, nonatomic) NSData *activationToken;
@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *connectionMode;
@property (copy, nonatomic) NSString *connectionType;
@property (copy, nonatomic) NSString *dataSharingOptInStatus;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *linkedAssistantId;
@property (copy, nonatomic) NSData *linkedSessionValidationData;
@property (copy, nonatomic) NSString *linkedSpeechId;
@property (copy, nonatomic) NSString *loggableAssistantId;
@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (copy, nonatomic) NSData *sessionValidationData;
@property (copy, nonatomic) NSString *sharedUserId;
@property (copy, nonatomic) NSString *speechId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)loadAssistant;
+ (id)loadAssistantWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
