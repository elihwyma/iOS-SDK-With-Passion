/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperationInfo.h>

@class NSArray, NSDictionary;

@interface CKFetchShareMetadataOperationInfo : CKOperationInfo

{
    _Bool _shouldFetchRootRecord;
    NSArray *_shareURLsToFetch;
    NSArray *_rootRecordDesiredKeys;
    NSDictionary *_shareInvitationTokensByShareURL;
}

@property (retain, nonatomic) NSArray *shareURLsToFetch;
@property (nonatomic) _Bool shouldFetchRootRecord;
@property (retain, nonatomic) NSArray *rootRecordDesiredKeys;
@property (retain, nonatomic) NSDictionary *shareInvitationTokensByShareURL;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
