/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperationInfo.h>

@class NSArray;

@interface CKFetchShareParticipantsOperationInfo : CKOperationInfo

{
    NSArray *_userIdentityLookupInfos;
}

@property (copy, nonatomic) NSArray *userIdentityLookupInfos;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
