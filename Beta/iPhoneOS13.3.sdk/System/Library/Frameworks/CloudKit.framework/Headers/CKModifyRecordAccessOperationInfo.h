/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray;

@interface CKModifyRecordAccessOperationInfo : CKDatabaseOperationInfo

{
    NSArray *_recordIDsToGrant;
    NSArray *_recordIDsToRevoke;
}

@property (retain, nonatomic) NSArray *recordIDsToGrant;
@property (retain, nonatomic) NSArray *recordIDsToRevoke;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
