/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class ACDDatabaseConnection;

@interface ACDClientAuthorizationManager : NSObject

{
    ACDDatabaseConnection *_databaseConnection;
}

- (id)_csvStringFromSet:(id)arg1;
- (id)initWithDatabaseConnection:(id)arg1;
- (id)allAuthorizationsForAccountTypeWithIdentifier:(id)arg1;
- (id)authorizationForClient:(id)arg1 accountTypeWithIdentifier:(id)arg2;
- (id)removeAuthorizationForClient:(id)arg1 accountType:(id)arg2;
- (id)authorizationForClient:(id)arg1 accountType:(id)arg2;
- (id)_setFromCSVString:(id)arg1;
- (id)removeAuthorizationForClient:(id)arg1 accountTypeWithIdentifier:(id)arg2;
- (id)removeAllClientAuthorizationsForAccountTypeWithIdentifier:(id)arg1;
- (id)setAuthorization:(id)arg1 forClient:(id)arg2 onAccountType:(id)arg3;
- (id)allAuthorizationsForAccountType:(id)arg1;
- (id)removeAllClientAuthorizationsForAccountType:(id)arg1;

@end
