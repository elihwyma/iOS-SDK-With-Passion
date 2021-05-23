/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary;

@interface CKPublishAssetsOperationInfo : CKDatabaseOperationInfo

{
    NSArray *_recordIDs;
    NSDictionary *_fileNamesByAssetFieldNames;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
}

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSDictionary *fileNamesByAssetFieldNames;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long URLOptions;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
