/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class CNAccount, NSString;

@interface DAContactsBasedAccount : NSObject

{
    _Bool _markedForDeletion;
    CNAccount *_account;
}

@property (nonatomic, readonly) CNAccount *account;
@property (nonatomic) _Bool markedForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)identifier;
- (id)initWithAccount:(id)arg1;
- (_Bool)isGroup;
- (_Bool)isContact;
- (int)legacyIdentifier;
- (id)externalIdentifier;
- (_Bool)isContainer;
- (void)markForDeletion;
- (void)updateSaveRequest:(id)arg1;
- (_Bool)isAccount;

@end
