/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFMailMessageLibrary, NSString;

@interface MFSqliteMessageIDStore : NSObject

{
    NSString *_url;
    long long _mailboxRowid;
    MFMailMessageLibrary *_library;
}

- (void)_loadMailboxRowidIfNecessary:(id)arg1;
- (id)initWithLibrary:(id)arg1 URLString:(id)arg2;
- (id)knownMessageIDsFromSet:(id)arg1;
- (id)messageIDsAddedBeforeDate:(double)arg1;
- (void)deleteUIDsNotInArray:(id)arg1;
- (unsigned int)numberOfMessageIDs;
- (void)deleteAllUIDs;
- (unsigned long long)flagsForUID:(id)arg1;

@end
