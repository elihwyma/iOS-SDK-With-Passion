/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

@class CPExclusiveLock;

@interface ACAccountMigrationLock : NSObject

{
    CPExclusiveLock *_underlyingLock;
}

+ (id)_currentSystemVersion;
+ (void)writeMigrationVersionPref;
+ (_Bool)isMigrationFinished;
+ (void)signalMigrationFinished;

- (id)init;
- (void)lock;
- (void)unlock;

@end
