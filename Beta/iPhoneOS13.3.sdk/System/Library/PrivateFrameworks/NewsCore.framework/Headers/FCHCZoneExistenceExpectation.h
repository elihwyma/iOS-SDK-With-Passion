/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class CKDatabase, CKRecordZoneID, NSString;

@interface FCHCZoneExistenceExpectation : NSObject

{
    _Bool _shouldExist;
    CKDatabase *_database;
    CKRecordZoneID *_zoneID;
}

@property (retain, nonatomic) CKDatabase *database;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (nonatomic) _Bool shouldExist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)validate;

@end
