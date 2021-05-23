/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SAMultiUserInfo : SABaseCommand <Swift>

@property (copy, nonatomic) NSArray *homeMembers;
@property (copy, nonatomic) NSArray *multiUserPitchComposition;
@property (nonatomic) _Bool voiceProfilesAreInFlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)multiUserInfo;
+ (id)multiUserInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
