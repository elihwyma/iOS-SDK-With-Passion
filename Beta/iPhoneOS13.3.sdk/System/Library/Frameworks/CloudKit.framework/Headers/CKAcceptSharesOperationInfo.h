/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray;

@interface CKAcceptSharesOperationInfo : CKDatabaseOperationInfo

{
    NSArray *_shareMetadatasToAccept;
}

@property (retain, nonatomic) NSArray *shareMetadatasToAccept;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)databaseScope;

@end
