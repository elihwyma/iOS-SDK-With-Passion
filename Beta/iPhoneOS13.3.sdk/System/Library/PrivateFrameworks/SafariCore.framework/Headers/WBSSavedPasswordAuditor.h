/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class WBSAutoFillQuirksManager, WBSSavedPasswordStore;

@interface WBSSavedPasswordAuditor : NSObject

{
    WBSSavedPasswordStore *_savedPasswordStore;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
}

@property (nonatomic, readonly) WBSSavedPasswordStore *savedPasswordStore;
@property (nonatomic, readonly) WBSAutoFillQuirksManager *autoFillQuirksManager;
@property (nonatomic, readonly) _Bool passwordStoreHasDuplicatedPasswords;

- (id)init;
- (id)initWithSavedPasswordStore:(id)arg1 autoFillQuirksManager:(id)arg2;
- (_Bool)savedPasswordIsReused:(id)arg1;
- (_Bool)_savedPasswordQualifiesForReuseAuditing:(id)arg1;
- (_Bool)_passwordIsReused:(id)arg1 byOtherSavedPassword:(id)arg2;
- (id)savedPasswordsWithDuplicatedPassword:(id)arg1;
- (id)duplicatePasswordsInPasswords:(id)arg1;

@end
