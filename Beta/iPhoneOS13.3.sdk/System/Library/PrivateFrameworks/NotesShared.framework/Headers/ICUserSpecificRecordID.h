/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class CKRecordID, NSString;

@interface ICUserSpecificRecordID : NSObject

{
    NSString *_recordType;
    NSString *_shareOwnerName;
    long long _databaseScope;
    NSString *_zoneName;
    NSString *_userSpecificOwnerName;
    NSString *_sharedRecordName;
}

@property (retain, nonatomic) NSString *recordType;
@property (retain, nonatomic) NSString *shareOwnerName;
@property (nonatomic) long long databaseScope;
@property (retain, nonatomic) NSString *zoneName;
@property (retain, nonatomic) NSString *userSpecificOwnerName;
@property (retain, nonatomic) NSString *sharedRecordName;
@property (nonatomic, readonly) NSString *recordName;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, readonly) CKRecordID *sharedRecordID;
@property (nonatomic, readonly) NSString *sharedRecordType;

+ (id)userSpecificRecordTypeFromSharedRecordType:(id)arg1;
+ (_Bool)isUserSpecificRecordType:(id)arg1;
+ (_Bool)isUserSpecificRecordID:(id)arg1;

- (id)initWithRecordName:(id)arg1;
- (id)initWithRecordType:(id)arg1 shareOwnerName:(id)arg2 databaseScope:(long long)arg3 zoneName:(id)arg4 userSpecificOwnerName:(id)arg5 sharedRecordName:(id)arg6;

@end
