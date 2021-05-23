/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <Foundation/NSError.h>

@interface NSError (HMBShareOperation)

@property (readonly, getter=hmbIsRetryShareOperationError) _Bool hmbRetryShareOperationError;
@property (readonly) _Bool hmbIsSQLiteConstraintError;
@property (readonly) _Bool hmbIsCloudKitError;
@property (readonly) _Bool hmbIsCKZoneDeletedError;
@property (readonly) _Bool hmbIsCKChangeTokenExpiredError;
@property (readonly) _Bool hmbIsCKPartialFailureError;
@property (readonly) _Bool hmbIsCKLimitExceededError;
@property (readonly) _Bool hmbIsCKManateeUnavailableError;
@property (readonly) _Bool hmbIsCKLostIdentityError;
@property (readonly) _Bool hmbIsCKManateeTemporarilyUnavailableError;
@property (readonly) double hmbCloudKitRetryDelay;

+ (id)hmbRetryShareOperationError;
+ (id)hmbErrorWithSQLite3Statement:(struct sqlite3_stmt *)arg1;
+ (id)hmbErrorWithSQLite3Context:(struct sqlite3 *)arg1 statement:(const char *)arg2;
+ (id)hmbErrorWithSQLite3Context:(struct sqlite3 *)arg1;
+ (id)hmbErrorWithSQLContext:(id)arg1;
+ (id)hmbErrorWithSQLContext:(id)arg1 statement:(const char *)arg2;
+ (id)hmbErrorWithSQLite3Status:(int)arg1;

- (id)hmbConciseCKError;

@end
