/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperationInfo.h>

@class NSArray;

@interface CKMarkNotificationsReadOperationInfo : CKOperationInfo

{
    NSArray *_notificationIDs;
}

@property (retain, nonatomic) NSArray *notificationIDs;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
