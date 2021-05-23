/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceClientState.h>

@class NSArray, NSNumber, NSString, SACalendar, SAUserState;

@interface SADynamiteClientState : SAAceClientState

@property (nonatomic) _Bool activeTvUser;
@property (nonatomic) _Bool ageVerificationRequired;
@property (retain, nonatomic) SAUserState *defaultUserState;
@property (retain, nonatomic) SACalendar *expirationDate;
@property (copy, nonatomic) NSNumber *iCloudMusicLibraryToggle;
@property (copy, nonatomic) NSArray *inContextUsersStates;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSNumber *userHistoryUnmodifiable;
@property (copy, nonatomic) NSString *userToken;
@property (copy, nonatomic) NSString *xpAbCookie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)syncKey;
+ (id)uniqueObjectIdentifier;
+ (id)dynamiteClientState;
+ (id)dynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
