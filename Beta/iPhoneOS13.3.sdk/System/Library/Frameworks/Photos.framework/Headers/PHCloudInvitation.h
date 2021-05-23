/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHObject.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface PHCloudInvitation : PHObject

{
    _Bool _isMine;
    int _invitationState;
    int _invitationStateLocal;
    NSString *_inviteeFirstName;
    NSString *_inviteeLastName;
    NSString *_inviteeFullName;
    NSDate *_inviteeSubscriptionDate;
    NSString *_albumGUID;
    NSString *_cloudGUID;
    NSNumber *_inviteeEmailKey;
    NSString *_inviteeHashedPersonID;
}

@property (nonatomic, readonly) NSString *albumGUID;
@property (nonatomic, readonly) NSString *cloudGUID;
@property (nonatomic, readonly) int invitationStateLocal;
@property (nonatomic, readonly) NSNumber *inviteeEmailKey;
@property (nonatomic, readonly) NSString *inviteeHashedPersonID;
@property (nonatomic, readonly) int invitationState;
@property (nonatomic, readonly) NSString *inviteeFirstName;
@property (nonatomic, readonly) NSString *inviteeLastName;
@property (nonatomic, readonly) NSString *inviteeFullName;
@property (nonatomic, readonly) _Bool isMine;
@property (nonatomic, readonly) NSDate *inviteeSubscriptionDate;
@property (nonatomic, readonly) NSArray *inviteeEmails;
@property (nonatomic, readonly) NSArray *inviteePhones;
@property (nonatomic, readonly) NSString *invitationStateDescription;

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;

- (id)personInfoManager;
- (id)inviteeDisplayNameIncludingEmail:(_Bool)arg1;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;

@end
