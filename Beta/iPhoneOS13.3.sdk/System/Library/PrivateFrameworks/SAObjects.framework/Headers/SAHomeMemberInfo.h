/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, SAHomeMemberSettings;

@interface SAHomeMemberInfo : AceObject <Swift>

@property (copy, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSString *companionAssistantId;
@property (copy, nonatomic) NSString *companionSpeechId;
@property (copy, nonatomic) NSString *enrollmentName;
@property (retain, nonatomic) SAHomeMemberSettings *homeMemberSettings;
@property (copy, nonatomic) NSString *loggableCompanionAssistantId;
@property (copy, nonatomic) NSString *loggableMultiUserSharedUserId;
@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (copy, nonatomic) NSString *sharedUserId;
@property (copy, nonatomic) NSString *speechId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)homeMemberInfo;
+ (id)homeMemberInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
