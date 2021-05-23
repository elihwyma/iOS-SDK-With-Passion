/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray;

@interface CKModifyWebSharingOperationInfo : CKDatabaseOperationInfo

{
    NSArray *_recordIDsToShare;
    NSArray *_recordIDsToUnshare;
    NSArray *_recordIDsToShareReadWrite;
}

@property (retain, nonatomic) NSArray *recordIDsToShare;
@property (retain, nonatomic) NSArray *recordIDsToUnshare;
@property (retain, nonatomic) NSArray *recordIDsToShareReadWrite;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
