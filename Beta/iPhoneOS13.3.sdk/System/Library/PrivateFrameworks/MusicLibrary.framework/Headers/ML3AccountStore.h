/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSString;

@interface ML3AccountStore : NSObject

@property (nonatomic, readonly) ACAccount *activeAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *accountDSID;

+ (id)defaultStore;

- (id)_init;
- (id)_accountsWithAccountTypeIdentifier:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)altDSIDForAccountWithDSID:(long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end
