/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSString;

@interface CKFetchRecordVersionsOperationInfo : CKDatabaseOperationInfo

{
    _Bool _shouldFetchAssetContent;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSString *_minimumVersionETag;
}

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSArray *desiredKeys;
@property (retain, nonatomic) NSString *minimumVersionETag;
@property (nonatomic) _Bool shouldFetchAssetContent;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
