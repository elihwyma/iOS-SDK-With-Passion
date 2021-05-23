/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray;

@interface CKArchiveRecordsOperationInfo : CKDatabaseOperationInfo

{
    NSArray *_recordIDs;
}

@property (retain, nonatomic) NSArray *recordIDs;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
