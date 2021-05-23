/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperationInfo.h>

@class CKShareMetadata, NSString;

@interface CKInitiateParticipantVettingOperationInfo : CKOperationInfo

{
    CKShareMetadata *_shareMetadata;
    NSString *_participantID;
    NSString *_address;
}

@property (retain, nonatomic) CKShareMetadata *shareMetadata;
@property (copy, nonatomic) NSString *participantID;
@property (copy, nonatomic) NSString *address;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
