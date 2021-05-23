/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class CKDatabase, CKRecordID, NSString;

@interface FCHCRecordExistenceExpectation : NSObject

{
    _Bool _shouldExist;
    CKDatabase *_database;
    CKRecordID *_recordID;
}

@property (retain, nonatomic) CKDatabase *database;
@property (copy, nonatomic) CKRecordID *recordID;
@property (nonatomic) _Bool shouldExist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)validate;

@end
