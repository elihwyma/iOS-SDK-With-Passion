/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class CNContact, IMHandle, IMPerson, NSArray, NSMutableArray, NSString;

@interface IMMe : NSObject

{
    IMPerson *_person;
    CNContact *_cnContact;
    NSString *_abNickname;
    NSString *_abFirstName;
    NSString *_abFullName;
    NSString *_abLastName;
    NSArray *_abEmails;
    NSMutableArray *_abIMHandles;
    NSMutableArray *_loginIMHandles;
}

@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) IMPerson *person;
@property (nonatomic, readonly) CNContact *cnContact;
@property (nonatomic, readonly) NSString *nickname;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSArray *emails;
@property (nonatomic, readonly) IMHandle *bestIMHandle;
@property (nonatomic, readonly) NSArray *imHandles;

+ (id)me;
+ (id)fallbackUserName;
+ (id)firstNameFromFallbackUserName;
+ (id)lastNameFromFallbackUserName;
+ (id)imHandleForService:(id)arg1;

- (id)init;
- (id)description;
- (_Bool)removeLoginIMHandle:(id)arg1;
- (void)resetABPerson;
- (_Bool)addLoginIMHandle:(id)arg1;
- (void)setIMPerson:(id)arg1;
- (_Bool)removeIMHandle:(id)arg1;
- (_Bool)addIMHandle:(id)arg1;
- (void)myPictureChanged;
- (void)rebuildIMHandles;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2;
- (void)setCNContact:(id)arg1;
- (id)loginIMHandles;
- (_Bool)isIMHandleLoginIMHandle:(id)arg1;

@end
