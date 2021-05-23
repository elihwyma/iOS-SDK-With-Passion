/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class CKServerChangeToken;

@interface CKFetchDatabaseChangesOperationInfo : CKDatabaseOperationInfo

{
    _Bool _fetchAllChanges;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
}

@property (retain, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) _Bool fetchAllChanges;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
