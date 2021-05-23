/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperationResult.h>

@class CKServerChangeToken, NSData, NSNumber;

@interface CKFetchRecordChangesOperationResult : CKOperationResult

{
    CKServerChangeToken *_serverChangeToken;
    NSData *_clientChangeTokenData;
    NSNumber *_status;
}

@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (retain, nonatomic) NSData *clientChangeTokenData;
@property (retain, nonatomic) NSNumber *status;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;

@end
