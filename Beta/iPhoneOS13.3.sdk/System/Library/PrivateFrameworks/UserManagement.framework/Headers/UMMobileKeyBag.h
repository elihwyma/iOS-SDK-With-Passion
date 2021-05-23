/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

#import <Foundation/NSObject.h>

@interface UMMobileKeyBag : NSObject

+ (void)initialize;
+ (_Bool)inSyncBubble;
+ (_Bool)isMultiUser;
+ (id)currentPersona;
+ (id)currentUser;
+ (int)_foregroundUID;
+ (id)_userAttributesForUID:(unsigned int)arg1 outError:(id *)arg2;
+ (double)passcodeBackOffIntervalForUser:(id)arg1;
+ (void)_setPasscodeTypeOnUser:(id)arg1 withPasscodeData:(id)arg2;
+ (id)personaSpecForUser:(id)arg1;
+ (void)_setAttributes:(id)arg1 onUser:(id)arg2;
+ (void)_handleAttributeAccessCFError:(struct __CFError *)arg1 outError:(id *)arg2;
+ (id)_mutablePersonaSpecBase;
+ (id)_uidDictForUser:(id)arg1;
+ (id)currentSyncBubbleUser;
+ (id)allSyncBubbleUsers;
+ (_Bool)_start:(_Bool)arg1 syncBubbleForUser:(id)arg2 outError:(id *)arg3;
+ (unsigned long long)userType;
+ (unsigned long long)maxNumberOfUsers;
+ (unsigned int)lastLoggedInUID;
+ (id)loginUser;
+ (id)lastLoggedInUser;
+ (id)allUsers;
+ (_Bool)adoptPersonaVoucherForAccoutID:(id)arg1 outError:(id *)arg2;
+ (id)currentUserSwitchContext;
+ (void)currentUserSwitchContextHasBeenUsed;
+ (id)loadUser:(id)arg1 withPasscodeData:(id)arg2;
+ (id)deleteUser:(id)arg1;
+ (id)userFromAttributes:(id)arg1;
+ (_Bool)fetchAttributesForUser:(id)arg1 outError:(id *)arg2;
+ (_Bool)isLoginSession;
+ (void)updateLoginSessionType;
+ (_Bool)writeAttributesToDiskForUser:(id)arg1 outError:(id *)arg2;
+ (id)taskFromDictionaryRepresentation:(id)arg1;
+ (id)dictionaryRepresentationOfTask:(id)arg1;
+ (id)queuedSyncBubbleUsers;
+ (id)syncBubbleMachServiceNamesForUser:(id)arg1;
+ (_Bool)startSyncBubbleForUser:(id)arg1 outError:(id *)arg2;
+ (_Bool)stopSyncBubbleForUser:(id)arg1 outError:(id *)arg2;
+ (_Bool)clearSyncBubblesWithOutError:(id *)arg1;

@end
