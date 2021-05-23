/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSString;

@interface CKFetchWebAuthTokenOperationInfo : CKDatabaseOperationInfo

{
    NSString *_APIToken;
}

@property (retain, nonatomic) NSString *APIToken;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
