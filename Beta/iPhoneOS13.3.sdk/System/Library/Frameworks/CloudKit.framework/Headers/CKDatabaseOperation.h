/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperation.h>

@class CKDatabase;

@interface CKDatabaseOperation : CKOperation

{
    CKDatabase *_database;
}

@property (retain, nonatomic) CKDatabase *database;

- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (id)flowControlKey;

@end
