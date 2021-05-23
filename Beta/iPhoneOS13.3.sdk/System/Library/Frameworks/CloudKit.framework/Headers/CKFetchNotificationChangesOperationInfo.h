/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperationInfo.h>

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperationInfo : CKOperationInfo

{
    _Bool _wantsChanges;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
}

@property (retain, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) _Bool wantsChanges;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
