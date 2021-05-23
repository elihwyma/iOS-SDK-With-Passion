/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSError.h>

@interface NSError (Accounts)

@property (nonatomic, readonly, getter=ac_isUnrecoverableDatabaseError) _Bool ac_unrecoverableDatabaseError;
@property (nonatomic, readonly, getter=ac_isDiskFullSQLError) _Bool ac_diskFullSQLError;

- (id)ac_secureCodingError;
- (id)_sanitizeObject:(id)arg1;

@end
