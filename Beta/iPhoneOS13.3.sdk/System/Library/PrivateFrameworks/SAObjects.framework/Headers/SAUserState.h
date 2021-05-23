/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSNumber, NSString;

@interface SAUserState : AceObject

@property (nonatomic) _Bool ageVerificationRequired;
@property (copy, nonatomic) NSString *sharedUserId;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *syncSharedUserId;
@property (copy, nonatomic) NSNumber *userHistoryUnmodifiable;
@property (copy, nonatomic) NSString *userToken;
@property (copy, nonatomic) NSString *xpAbCookie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)userState;
+ (id)userStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
