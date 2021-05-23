/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary;

@interface CKFetchShareParticipantKeyOperationInfo : CKDatabaseOperationInfo

{
    NSDictionary *_baseTokensByShareID;
    NSDictionary *_childRecordIDsByShareID;
    NSArray *_shareIDs;
}

@property (retain, nonatomic) NSDictionary *baseTokensByShareID;
@property (retain, nonatomic) NSDictionary *childRecordIDsByShareID;
@property (retain, nonatomic) NSArray *shareIDs;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
