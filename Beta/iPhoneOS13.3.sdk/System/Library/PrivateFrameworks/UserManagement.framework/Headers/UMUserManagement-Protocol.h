/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

#import <UserManagement/Swift-Protocol.h>

@class UMUser;

@protocol UMUserManagement <Swift>

@property (nonatomic, readonly) _Bool isMultiUser;
@property (copy, nonatomic, readonly) UMUser *currentUser;
@property (copy, nonatomic, readonly) UMUser *loginUser;
@property (nonatomic, readonly) _Bool isLoginSession;
@property (nonatomic, readonly) unsigned long long maxNumberOfUsers;

- (unsigned short)disableUser:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)canAccessUserProperties;
- (unsigned short)createUser:passcodeData:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)loadUser:passcodeData:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteUser:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)registerUserListUpdateObserver: /* Error: Ran out of types for this method. */;

@end
