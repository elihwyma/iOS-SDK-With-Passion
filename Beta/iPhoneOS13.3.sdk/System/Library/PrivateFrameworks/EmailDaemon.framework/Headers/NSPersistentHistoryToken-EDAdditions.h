/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <CoreData/NSPersistentHistoryToken.h>

@interface NSPersistentHistoryToken (EDAdditions)

+ (id)ed_unarchivedTokenWithData:(id)arg1 error:(id *)arg2;

- (id)ed_archiveTokenWithError:(id *)arg1;

@end
