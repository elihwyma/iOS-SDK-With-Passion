/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class CKDatabase, CKRecordZoneID, NSArray, NSString;

@interface FCHCZoneContentsExpectation : NSObject

{
    CKDatabase *_database;
    CKRecordZoneID *_zoneID;
    NSArray *_recordTests;
}

@property (retain, nonatomic) CKDatabase *database;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (copy, nonatomic) NSArray *recordTests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)validate;

@end
