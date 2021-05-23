/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <CloudKit/CKRecordZoneID.h>

#import <NotesShared/Swift-Protocol.h>

@class NSString;

@interface CKRecordZoneID (IC) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)databaseScope;
- (id)ic_loggingDescription;
- (_Bool)ic_isOwnedByCurrentUser;

@end
